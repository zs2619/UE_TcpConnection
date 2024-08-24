
#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "TcpConnection.h"
#include "GSEventHandler.h"
#include "IEventHandler.h"
#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTcpConnectionTest, "Dish.FTcpConnectionTest",
								 EAutomationTestFlags::CommandletContext | EAutomationTestFlags::EditorContext |
									 EAutomationTestFlags::SmokeFilter)

bool FTcpConnectionTest::RunTest(const FString &Parameters)
{
	//UTcpConnection *connection;
	//UGSEventHandler *gsEH;

	//connection = NewObject<UTcpConnection>();
	//connection->SetRemoteURL("127.0.0.0:20000");
	//gsEH = (UGSEventHandler *)connection->Connect<UGSEventHandler>();

	//connection->Dispose();

	//connection = nullptr;
	//gsEH = nullptr;
	return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS