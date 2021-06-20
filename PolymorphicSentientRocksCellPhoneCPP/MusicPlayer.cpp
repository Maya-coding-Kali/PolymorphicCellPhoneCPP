#include "pch.h"
#include "MusicPlayer.h"
#include <iostream>

MusicPlayer::MusicPlayer()
{
	MusicFile = (char*)"";
}
char* MusicPlayer::GetMusicFile()
{
	return MusicFile;
}
void MusicPlayer::SetMusicFile(char* vMusicFile)
{
	MusicFile = vMusicFile;
}
char* MusicPlayer::ServiceName()
{
	return (char*)"Music Player";
}
char* MusicPlayer::Can()
{
	return (char*)"Plays Music!!!!";
}