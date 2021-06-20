#include "pch.h"
#include "Service.h"
#include "WebBrowser.h"
#include <iostream>

WebBrowser::WebBrowser()
{

}
char* WebBrowser::Open(char* vName)
{

	return (char*) "Is Loading";

}
char* WebBrowser::Cache()
{

	return (char*)"Things have been stored!";

}
char* WebBrowser::OpenNewTab()
{

	return (char*)"Proceeding to Open";

}
char* WebBrowser::ServiceName()
{
	return (char*)"Web Browser";
}

char* WebBrowser::Can()
{
	return (char*)"Open websites, new tabs and store things in cache memory.";
}