#include "pch.h"
#include "VideoCamera.h"
#include <iostream>

VideoCamera::VideoCamera()
{

}
char* VideoCamera::Record()
{
	return (char*)"Recording...";
}
char* VideoCamera::StopRecord()
{
	return (char*)"Ending Recording...";
}
char* VideoCamera::ServiceName()
{
	return (char*)"Video Camera";
}
char* VideoCamera::Can()
{
	return (char*)"Take Vidoes";
}