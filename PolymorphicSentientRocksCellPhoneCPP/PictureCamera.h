#pragma once
#include "Camera.h"
class PictureCamera : public Camera
{

public:
	PictureCamera();
	char* TakePicture();
	char* ServiceName();
	char* Can();
};


