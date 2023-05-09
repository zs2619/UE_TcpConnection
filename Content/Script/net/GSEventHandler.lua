---@type UGSEventHandler
local M = UnLua.Class()
local pb = require "pb"
local pbUnsafe = require "pb.unsafe"
local DishInst = require "DishGameInstance"



function M:OnConnected()
	print('UGSEventHandler::OnConnected')
	self:LocalLogin("shuai")
end

function M:OnDisconnected()
	print('UGSEventHandler::OnDisconnected')
end

function M:OnReconnectPending()
	print('UGSEventHandler::OnReconnectPending')
end

function M:OnMsg(id ,msg)
	print('M:OnMsg')
	local rt=self.msgRouter[id]
	if rt~=nil then
		print(rt.msgPB)
		local retData= assert(pbUnsafe.decode(rt.msgPB, msg:GetData(),msg:Num()))
		local ret=rt.func(self,retData)
		if ret then
		end
	end
	return true
end

function M:SendMsg(id,msg)
	print(id)
    local tmsg = UE.TArray(UE.uint8)
	local mlen=string.len(msg)
	tmsg:Resize(mlen)
	print(tmsg:Num())
	for i=1, string.len(msg) do
		tmsg:Set(i,msg:byte(i))
	end
    return self.Overridden.SendMsg(self,id,tmsg)
end

function M:LocalLogin(inUserID)
	local msg= assert(pb.encode("pb.LocalLoginReq", {userID=inUserID})	)
	return self:SendMsg(pb.enum('pb.C2S_MsgID.MsgID','LocalLogin'),msg)
end


function M:QuickJoinRealm(inRealmCfgID)
	local msg= assert(pb.encode("pb.QuickJoinRealmReq", {realmConfigID=inRealmCfgID})	)
	return self:SendMsg(pb.enum('pb.C2S_MsgID.MsgID','QuickJoinRealm'),msg)
end


function M:LoginOKResp(msg)
	print('M:LocalLoginResp')
	print(msg.serverTime)
	print(msg.playerModel.createTime)
	print(msg.playerModel.userID)
	print(msg.playerModel.playerID)
	print(msg.playerModel.level)
	print(msg.playerModel.exp)
	print(msg.playerModel.name)

	-- self:QuickJoinRealm('inRealmCfgID')
end

function M:LoginFailResp(msg)
	print('M:LoginFailResp')
end


function M:JoinRealmOKResp(msg)
	print('M:JoinRealmOKResp')
	print(msg.realmConfigID)
	print(msg.dsAddr)
	print(msg.teamID)
end

function M:JoinRealmFailResp(msg)
	print('M:JoinRealmFailResp')
end




M.msgRouter={
	[pb.enum('pb.S2C_MsgID.MsgID','LoginOK')]={msgPB="pb.LoginOKResp",func=M.LoginOKResp},
	[pb.enum('pb.S2C_MsgID.MsgID','LoginFail')]={msgPB="pb.LoginFAILResp",func=M.LoginFailResp},
	[pb.enum('pb.S2C_MsgID.MsgID','JoinRealmOK')]={msgPB="pb.JoinRealmOKResp", func=M.JoinRealmOKResp},
	[pb.enum('pb.S2C_MsgID.MsgID','JoinRealmFail')]={msgPB="pb.JoinRealmFailResp",func=M.JoinRealmFailResp},
}

return M