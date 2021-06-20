#include "Service.h"
#include "pch.h"
#include <iostream>
Service::Service()
{
	Provider = (char*)"";
	Name = (char*)"";
}
void Service::SetName(char* vName)
{
	Name = vName;
}

char* Service::GetName()
{
	return Name;
}
void Service::SetProvider(char* VProvider)
{
	Provider = VProvider;
}

char* Service::GetProvider()
{
	return Provider;
}


bool Service::UseKeyBoard()
{
	
		return true;
}

char* Service::ServiceName()
{
	return (char*)"Device";
}

char* Service::Can()
{
	return (char*) "CAN Do it all baby";
}
void Service::Print()
{
	std::cout << "This is all the is and ever can be, contained within one small device" << std::endl;
}