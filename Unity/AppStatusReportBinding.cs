using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;

public class AppStatusReportBinding  
{
	[DllImport("__Internal")]
	private static extern void _init(string appID);

	public static void Init(string appID)
	{
		if (Application.platform == RuntimePlatform.IPhonePlayer)
		{
			_init(appID);
		}
	}

	[DllImport("__Internal")]
	private static extern void _report();
	
	public static void Report()
	{
		if( Application.platform == RuntimePlatform.IPhonePlayer )
		{
			_report();
		}
	}
}