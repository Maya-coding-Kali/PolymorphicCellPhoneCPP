#pragma once
#include "Camera.h"
class VideoCamera : public Camera
{

public:
	VideoCamera();
	char* Record();
	char* StopRecord();
	char* ServiceName();
	char* Can();
};


