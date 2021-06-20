#pragma once
#include "Player.h"
class MusicPlayer : public Player
{
private:
	char* MusicFile;

public:
	MusicPlayer();
	char* GetMusicFile();
	void  SetMusicFile(char*);
	char* ServiceName();
	char* Can();
};


