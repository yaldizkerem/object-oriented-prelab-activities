#include"VideoPlayer.h"
#include<iostream>
using namespace std;
void VideoPlayer::BackWard(){
  cout<<"VideoPlayer : Does not support the backward operation"<<endl;//ouputs
}
void VideoPlayer::EjectMedia(){
  cout<<"VideoPlayer : Ejecting the media : "<<mediaName<<endl;//ouputs
}
void VideoPlayer::Forward(){
  cout<<"VideoPlayer : Does not support the forward operation"<<endl;//ouputs
}
void VideoPlayer::MounthMedia(const string& mediaName){
	this->mediaName = mediaName;//assign
	cout << "VideoPlayer : Trying to mount the Media..." << endl;//ouputs
	string temp;
	bool flag = false;
	temp = mediaName.substr(mediaName.find(".")+1, mediaName.length());//substring after '.'
	for (int i = 0; i < supportedFormatCount; i++) {

		if (temp == supportedFormats[i])//if it is supported
			flag = true;
	}
	if (flag)
		cout << "VideoPlayer : Media is supported and Playable.." << endl;//ouputs
	else
		cout << "VideoPlayer : Media is not supported" << endl;//ouputs
}
VideoPlayer::VideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount):Player(maxVolumeLevel)
{
  this->supportedFormats = supportedFormats;//assign
	this->supportedFormatCount = supportedFormatCount;//assign
}
VideoPlayer::~VideoPlayer(){}
