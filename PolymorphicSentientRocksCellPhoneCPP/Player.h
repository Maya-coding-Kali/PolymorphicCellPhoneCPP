#pragma once
#include "Service.h"
class Player : public Service
{

public:
	Player();
	char* Play();
	char* StopPlay();
	char* ServiceName();
	char* Can();
};


