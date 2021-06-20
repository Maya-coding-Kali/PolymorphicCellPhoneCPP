#include "pch.h"
#include "Service.h"
#include "Camera.h"
#include <iostream>

Camera::Camera()
{

}
char* Camera::OpenCamera(char* Vopen)
{
	if (Vopen == "o" || Vopen == "O")
	{
		return (char*)"Your Camera is Open!";
	}
	else
	{
		return (char*)"Your Camera is Closed :(";
	}
}
char* Camera::ServiceName()
{
	return (char*)"Camera";
}
char* Camera::Can()
{
	return (char*)"Take Pictures and Vidoes";
}