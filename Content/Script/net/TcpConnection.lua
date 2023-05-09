---@type UTcpConnection
local M = UnLua.Class()

function M:SetRemoteURL(inRemoteURL)
    self.Overridden.SetRemoteURL(self,inRemoteURL)
    print(inRemoteURL)
end

return M