#include"VLCVideoPlayer.h"
#include<iostream>
using namespace std;
void VLCVideoPlayer::BackWard(){
  cout<<"VLCVideoPlayer : Backward the music "<<mediaName<<endl;//ouputs
}
void VLCVideoPlayer::Forward(){
  cout<<"VLCVideoPlayer : Forward the music "<<mediaName<<endl;//ouputs
}
void VLCVideoPlayer::VolumeDown(int amount){
  Player::VolumeDown(amount);//upcast
  cout<<"VLCVideoPlayer : Adjusting Equaliser"<<endl;//ouputs
}
void VLCVideoPlayer::VolumeUp(int amount){
  Player::VolumeUp(amount);//upcast
  cout<<"VLCVideoPlayer : Adjusting Equaliser"<<endl;//ouputs
}
//counstructor
VLCVideoPlayer::VLCVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount):VideoPlayer(maxVolumeLevel,supportedFormats,supportedFormatsCount){}
VLCVideoPlayer::~VLCVideoPlayer(){}//destructor
