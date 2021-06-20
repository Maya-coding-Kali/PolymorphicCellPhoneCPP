#include "pch.h"
#include "Service.h"
#include "EmailClient.h"
#include <iostream>

EmailClient::EmailClient()
{

}
char* EmailClient::Send()
{

	return (char*)"Email Has Sent!";

}
char* EmailClient::Receive()
{

	return (char*)"You've Got Mail!";

}
char* EmailClient::Reply()
{

	return (char*)"New Draft to Reply With";

}
char* EmailClient::Forward()
{

	return (char*)"Message Forwarded";

}
char* EmailClient::ServiceName()
{
	return (char*)"Email";
}

char* EmailClient::Can()
{
	return (char*)"Sends, Recives, Reply and forwards emails.";
}