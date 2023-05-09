#pragma once

#include "IEventHandler.h"
#include "UnLuaInterface.h"
#include "GSEventHandler.generated.h"

UCLASS()
class DISH_API UGSEventHandler : public UIEventHandler,public IUnLuaInterface
{
	GENERATED_BODY()
public:
	UGSEventHandler();
	virtual ~UGSEventHandler();
	virtual FString GetModuleName_Implementation() const override;

public:
	virtual void OnRecvMessage();

public:
	bool LocalLogin(const FString &userID);
	bool QuickJoinRealm(const FString &realmCfgID);
};