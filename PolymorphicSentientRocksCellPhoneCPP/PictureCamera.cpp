#include "pch.h"
#include "PictureCamera.h"
#include <iostream>

PictureCamera::PictureCamera()
{

}
char* PictureCamera::TakePicture()
{
	return (char*)"Taking Photograph...";
}
char* PictureCamera::ServiceName()
{
	return (char*)"Picture Camera";
}
char* PictureCamera::Can()
{
	return (char*)"Takes Pictures";
}