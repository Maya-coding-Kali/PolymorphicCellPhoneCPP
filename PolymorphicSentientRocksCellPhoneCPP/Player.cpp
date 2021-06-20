#include "pch.h"
#include "Service.h"
#include "Player.h"
#include <iostream>

Player::Player()
{

}
char* Player::Play()
{
	
		return (char*)"You are now playing!";
	
}
char* Player::StopPlay()
{
	return(char*)"You Have stopped playing!";
}
char* Player::ServiceName()
{
	return (char*)"Player";
}
char* Player::Can()
{
	return (char*)"Plays Audio and Vidoes.";
}