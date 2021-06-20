#pragma once
#include "Service.h"
class Camera : public Service
{

public:
	Camera(); 
	char* OpenCamera(char*);
	char* ServiceName();
	char* Can();
};


