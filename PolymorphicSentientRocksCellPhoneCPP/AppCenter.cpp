#include "pch.h"
#include "Service.h"
#include "AppCenter.h"
#include <iostream>


AppCenter::AppCenter()
{
	DownloadAppName = (char*)"";
	DeleteAppName = (char*)"";
	OpenAppName = (char*)"";
}
char* AppCenter::DownloadApp(char* vName)
{
	DownloadAppName = vName;
	return (char*)"App has Started downloading!";

}
char* AppCenter::DeleteApp(char* vName)
{
	DeleteAppName = vName;

	return (char*)"App has been deleted!";

}
char* AppCenter::OpenApp(char* vName)
{
	OpenAppName = vName;

	return (char*)"Proceeding to Open";

}
char* AppCenter::ServiceName()
{
	return (char*)"Applications";
}


char* AppCenter::Can()
{
	return (char*)"Download, Open and Delete apps.";
}