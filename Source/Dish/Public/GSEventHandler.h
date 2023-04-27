#pragma once

#include "IEventHandler.h"
#include "GSEventHandler.generated.h"

UCLASS()
class DISH_API UGSEventHandler : public UIEventHandler
{
	GENERATED_BODY()
public:
	UGSEventHandler();
	virtual ~UGSEventHandler();

public:
	virtual void OnRecvMessage();

public:
	bool LocalLogin(const FString &userID);
	bool QuickJoinRealm(const FString &realmCfgID);
};