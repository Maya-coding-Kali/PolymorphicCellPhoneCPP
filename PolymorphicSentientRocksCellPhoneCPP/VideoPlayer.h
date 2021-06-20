#pragma once
#include "Player.h"
class VideoPlayer : public Player
{
private:
	char* VideoFile;

public:
	VideoPlayer();
	char* GetVideoFile();
	void  SetVideoFile(char*);
	char* ServiceName();
	char* Can();
};


