#pragma once
#include "Service.h"
class Message : public Service
{

public:
	Message();
	char* Send();
	char* Receive();
	char* ServiceName();
	char* Can();
};


