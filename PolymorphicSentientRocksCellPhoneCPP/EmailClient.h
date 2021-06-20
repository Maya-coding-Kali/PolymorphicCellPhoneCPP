#pragma once
#include "Service.h"
class EmailClient : public Service
{
private:

public:
	EmailClient();

	char* Send();
	char* Receive();
	char* Reply();
	char* Forward();
	char* ServiceName();
	char* Can();
};


