#include"BugiVideoPlayer.h"
#include<iostream>
using namespace std;
void BugiVideoPlayer::EjectMedia(){
  VideoPlayer::EjectMedia();
  cout<<"BugiVideoPlayer : Media player crushed!"<<endl;//output
}
//counstructor
BugiVideoPlayer::BugiVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount):VideoPlayer(maxVolumeLevel,supportedFormats,supportedFormatsCount){}
BugiVideoPlayer::~BugiVideoPlayer(){}//destructor
