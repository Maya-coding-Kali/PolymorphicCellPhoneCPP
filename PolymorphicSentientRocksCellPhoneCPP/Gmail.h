#pragma once
#include "EmailClient.h"
class Gmail : public EmailClient
{
private:
	char* email;
public:
	Gmail();

	char* SignIn(char*);
	char* SignOut();
	char* ServiceName();
	char* Can();
};


