// PolymorphicSentientRocksCellPhoneCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Service.h"
#include "Camera.h"
#include "Calendar.h"
#include "Calculator.h"
#include "Phone.h"
#include "AppCenter.h"
#include "EmailClient.h"
#include "Gmail.h"
#include "Message.h"
#include "MusicPlayer.h"
#include "PictureCamera.h"
#include "Player.h"
#include "VideoCamera.h"
#include "VideoPlayer.h"
#include "WebBrowser.h"
#include <iostream>

int main()
{
	Phone Phone;
	Phone.SetProvider((char*)"Fido");
	std::cout << "Service Name is " << Phone.GetName() << std::endl;
	std::cout << "The Provider is " << Phone.GetProvider() << std::endl;
	std::cout << Phone.PlaceCall(3396939) << std::endl;
	std::cout << Phone.SetVoiceVolume(2) << std::endl;
	std::cout << Phone.DeclineCall() << std::endl;
	std::cout << Phone.ReceiveCall() << std::endl;
	std::cout << Phone.Can() << std::endl << std::endl;

	Calculator Calculator;
	std::cout << Calculator.ServiceName() << std::endl;
	std::cout << Calculator.Add(10, 1) << std::endl;
	std::cout << Calculator.Sub(10, 1) << std::endl;
	std::cout << Calculator.Mult(10, 1) << std::endl;
	std::cout << Calculator.Div(10, 100) << std::endl;
	std::cout << Calculator.Can() << std::endl << std::endl;

	Calendar Calendar;
	std::cout << Calendar.ServiceName() << std::endl;
	Calendar.SetDate(2021, 4,5);
	std::cout << Calendar.GetDate() << std::endl;
	std::cout << Calendar.NewEvent() << std::endl;
	std::cout << Calendar.ModifyEvent() << std::endl;
	std::cout << Calendar.DeleteEvent() << std::endl;
	std::cout << Calendar.Can() << std::endl << std::endl;

	Camera Camera;
	std::cout << Camera.ServiceName() << std::endl;
	std::cout << Camera.OpenCamera((char*)"O") << std::endl;
	std::cout << Camera.Can() << std::endl << std::endl;

	AppCenter AppCenter;
	std::cout << AppCenter.ServiceName() << std::endl;
	std::cout << AppCenter.DownloadApp((char*) "Awesome App") << std::endl;
	std::cout << AppCenter.DeleteApp((char*)"Crappy App") << std::endl;
	std::cout << AppCenter.OpenApp((char*)"Fun App") << std::endl;
	std::cout << AppCenter.Can() << std::endl << std::endl;

	EmailClient EmailClient;
	std::cout << EmailClient.ServiceName() << std::endl;
	std::cout << EmailClient.Send() << std::endl;
	std::cout << EmailClient.Receive() << std::endl;
	std::cout << EmailClient.Reply() << std::endl;
	std::cout << EmailClient.Forward() << std::endl;
	std::cout << EmailClient.Can() << std::endl << std::endl;

	Gmail Gmail;
	std::cout << Gmail.ServiceName() << std::endl;
	std::cout << Gmail.SignIn((char*)"Maya.Kali@ITDcanada.com") << std::endl;
	std::cout << Gmail.SignOut() << std::endl;
	std::cout << Gmail.Reply() << std::endl;
	std::cout << Gmail.Forward() << std::endl;
	std::cout << Gmail.Can() << std::endl << std::endl;

	Message Message;
	std::cout << Message.ServiceName() << std::endl;
	std::cout << Message.Send() << std::endl;
	std::cout << Message.Receive() << std::endl;
	std::cout << Message.Can() << std::endl << std::endl;

	MusicPlayer MusicPlayer;
	std::cout << MusicPlayer.ServiceName() << std::endl;
	MusicPlayer.SetMusicFile((char*)"Awesome song");
	std::cout << MusicPlayer.GetMusicFile() << std::endl;
	std::cout << MusicPlayer.Play() << std::endl;
	std::cout << MusicPlayer.StopPlay() << std::endl;
	std::cout << MusicPlayer.Can() << std::endl << std::endl;

	PictureCamera PictureCamera;
	std::cout << PictureCamera.ServiceName() << std::endl;
	std::cout << PictureCamera.TakePicture() << std::endl;
	std::cout << PictureCamera.Can() << std::endl << std::endl;

	Player Player;
	std::cout << Player.ServiceName() << std::endl;
	std::cout << Player.Play() << std::endl;
	std::cout << Player.StopPlay() << std::endl;
	std::cout << Player.Can() << std::endl << std::endl;

	VideoCamera VideoCamera;
	std::cout << VideoCamera.ServiceName() << std::endl;
	std::cout << VideoCamera.OpenCamera((char*)"O") << std::endl;
	std::cout << VideoCamera.Record() << std::endl;
	std::cout << VideoCamera.StopRecord() << std::endl;
	std::cout << VideoCamera.Can() << std::endl << std::endl;

	VideoPlayer VideoPlayer;
	std::cout << VideoPlayer.ServiceName() << std::endl;
	std::cout << VideoPlayer.Play() << std::endl;
	std::cout << VideoPlayer.StopPlay() << std::endl;
	VideoPlayer.SetVideoFile((char*)"Neat Video To Watch") ;
	std::cout << VideoPlayer.GetVideoFile() << std::endl;
	std::cout << VideoPlayer.Can() << std::endl << std::endl;

	WebBrowser WebBrowser;
	std::cout << WebBrowser.ServiceName() << std::endl;
	std::cout << WebBrowser.Open((char*)"www.Awesomesite.net") << std::endl;
	std::cout << WebBrowser.Cache() << std::endl;
	std::cout << WebBrowser.OpenNewTab() << std::endl;
	std::cout << WebBrowser.Can() << std::endl << std::endl;

	Service* Service[14];
	Service[0] = &Phone;
	Service[1] = &Calculator;
	Service[2] = &Calendar;
	Service[3] = &Camera;
	Service[4] = &AppCenter;
	Service[5] = &EmailClient;
	Service[6] = &Gmail;
	Service[7] = &Message;
	Service[8] = &MusicPlayer;
	Service[9] = &PictureCamera;
	Service[10] = &Player;
	Service[11] = &VideoCamera;
	Service[12] = &VideoPlayer;
	Service[13] = &WebBrowser;
	
	



	for (int i = 0; i <= 13; i++)
	{
		std::cout << "Service:\n";
		std::cout << Service[i]->ServiceName() << std::endl;
		std::cout << "Can:\n";
		std::cout << Service[i]->Can() << std::endl << std::endl;
		
		
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
