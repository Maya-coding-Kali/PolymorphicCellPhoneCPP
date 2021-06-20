#include "pch.h"
#include "Service.h"
#include "Message.h"
#include <iostream>

Message::Message()
{

}
char* Message::Send()
{

	return (char*)"Your Message was sent!";

}
char* Message::Receive()
{
	return(char*)"You Have A new message!";
}
char* Message::ServiceName()
{
	return (char*)"Message";
}
char* Message::Can()
{
	return (char*)"Sends and Receives Messages.";
}