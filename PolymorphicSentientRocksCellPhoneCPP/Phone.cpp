#include "pch.h"
#include "Service.h"
#include "Phone.h"
#include <iostream>
Phone::Phone()
{
	Name = (char*)"Phone";
}
char* Phone::PlaceCall(long VphoneNo)
{
	if (CheckPhoneNumber(VphoneNo))
	{
		return (char*)"Dialing ...";
	}
	else
	{
		return (char*)"Ivalid Number.";
	}

}
char* Phone::ReceiveCall()
{
	return (char*)"Receiving Call ...";
}
char* Phone::DeclineCall()
{
	return (char*)"Declining Call ...";
}
char* Phone::SetVoiceVolume(int VVolume)
{
	if (VVolume >= 0 && VVolume <= 10)
	{
	
		return (char*)"Incrementing...";
	}
	else
	{
		return (char*)"Too loud! You'll go deaf!!";
	}
}
bool Phone::CheckPhoneNumber(long VNumber)
{
	if (VNumber >= 1111111 && VNumber <= 9999999)
	{
		return true;
	}
	else
	{
		return false;
	}
}
char* Phone::ServiceName()
{
	return (char*)"Device";
}
char* Phone::Can()
{
	return (char*)"Place, receive, and decline calls...";
}