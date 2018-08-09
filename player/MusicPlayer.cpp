#include"MusicPlayer.h"
#include<iostream>
using namespace std;
void MusicPlayer::BackWard(){
  cout<<"MusicPlayer : Does not support the backward operation"<<endl;//output
}
void MusicPlayer::Forward(){
  cout<<"MusicPlayer : Does not support the forward operation"<<endl;//ouput
}
void MusicPlayer::EjectMedia(){
  cout<<"MusicPlayer : Ejecting the media : "<<mediaName<<endl;//ouput
}
void MusicPlayer::MounthMedia(const string& mediaName){
	this->mediaName = mediaName;
	cout << "MusicPlayer : Trying to mount the Media..." << endl;//ouput
	string temp;
	bool flag = false;
	temp = mediaName.substr(mediaName.find(".")+1, mediaName.length());//substring after '.'
	for (int i = 0; i < supportedFormatCount; i++) {

		if (temp == supportedFormats[i])//if it is supported
			flag = true;
	}
	if (flag)
		cout << "MusicPlayer : Media is supported and Playable.." << endl;//ouput
	else
		cout << "MusicPlayer : Media is not supported" << endl;//ouput
}
MusicPlayer::MusicPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):Player(maxVolumeLevel)//counstructor
{
  this->supportedFormats = supportedFormats;//assign
	this->supportedFormatCount = supportedFormatCount;//assign
}
MusicPlayer::~MusicPlayer(){}//destructor
