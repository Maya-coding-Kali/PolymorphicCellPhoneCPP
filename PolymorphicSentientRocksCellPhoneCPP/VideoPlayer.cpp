#include "pch.h"
#include "VideoPlayer.h"
#include <iostream>

VideoPlayer::VideoPlayer()
{
	VideoFile = (char*)"";
}
char* VideoPlayer::GetVideoFile()
{
	return VideoFile;
}
 void VideoPlayer::SetVideoFile(char* vVideoFile)
{
	 VideoFile = vVideoFile;
}
 char* VideoPlayer::ServiceName()
 {
	 return (char*)"Video Player";
 }
char* VideoPlayer::Can()
{
	return (char*)"Plays videos!!!";
}