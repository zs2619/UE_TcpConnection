require("LuaPanda").start("127.0.0.1",8818)
local M = UnLua.Class()
local pb = require "pb"
M.GInst=nil

function M:ScriptInit()
    print("M:ScriptInit")
	local old = pb.state(nil)

	local filePath=UE.UUnLuaFunctionLibrary.GetScriptRootPath()..'pb/pb'
	print(filePath)
	local ret,tmp = pb.loadfile(filePath)
	print(ret )
    M.GInst=self
    if self.TcpConnection ~= nil then
        local r = UE.UKismetSystemLibrary.IsDedicatedServer(self)
        if r ~= false then
        else
            self:ConnectGS("127.0.0.1:20000")
        end

    end
end

function M:ReceiveShutdown()
    print("M:ReceiveShutdown")
    self.TcpConnection:Dispose();
end

return M