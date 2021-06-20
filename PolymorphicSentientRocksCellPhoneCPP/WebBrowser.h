#pragma once
#include "Service.h"
class WebBrowser : public Service
{
private:

public:
	WebBrowser();

	char* Open(char*);
	char* Cache();
	char* OpenNewTab();
	char* ServiceName();
	char* Can();
};


