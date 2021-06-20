#pragma once
#include "Service.h"
class AppCenter : public Service
{
private:
	char* DownloadAppName;
	char* DeleteAppName;
	char* OpenAppName;
public:
	AppCenter();
	
	char* DownloadApp(char*);
	char* DeleteApp(char*);
	char* OpenApp(char*);
	char* ServiceName();
	char* Can();
};


