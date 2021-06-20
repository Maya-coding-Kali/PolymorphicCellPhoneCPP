#include "pch.h"
#include "Service.h"
#include "Gmail.h"
#include <iostream>

Gmail::Gmail()
{
	email = (char*)"";
}
char* Gmail::SignIn(char* Vemail)
{
	email = Vemail;

	return (char*)"You have successfully signed in!";

}
char* Gmail::SignOut()
{

	return (char*)"Good Riddance!";

}
char* Gmail::ServiceName()
{
	return (char*)"Gmail";
}

char* Gmail::Can()
{
	return (char*)"SignIn and Out.";
}