AppStatusReport
===============

报告app日活数据。

## Requirement
1. iOS 5.0
2. openUDID
3. ARC (如果不是 ARC 环境，请在工程的Build Phases设置给「AWAppStatusReport.m」加上「**-fobjc-arc**」编译开关)

## 集成步骤
1. 添加AppStatusReport目录到工程里（已包含openUDID）；
2. 添加AdSupport.framework到工程；
3. 在info.plist里添加一个新键「**AppStoreID**」，值为你的app在AppStore的id。
4. 请appDelegate里分别于以下两个方法里调用：

			- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
			{
			   	//Other code
			   	
			   	[AWAppStatusReport report];
			   	
			   	//Other code
			}
			
			- (void)applicationWillEnterForeground:(UIApplication *)application
			{
			    [AWAppStatusReport report];
			}
