#pragma once
#include "Service.h"
class Phone : public Service
{
private:
	bool CheckPhoneNumber(long);
public:
	Phone();
	char* PlaceCall(long);
	char* ReceiveCall();
	char* SetVoiceVolume(int);
	char* DeclineCall();
	char* ServiceName();
	char* Can();
};


