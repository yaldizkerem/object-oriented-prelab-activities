#include"Walkman.h"
#include<iostream>
using namespace std;
void Walkman::EjectMedia(){
  MusicPlayer::EjectMedia();//upcast
  cout<<"Walkman : Closing the carriage"<<endl;//ouput
}
//constructor
Walkman::Walkman(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount):MusicPlayer(maxVolumeLevel,supportedFormats,supportedFormatsCount){}
Walkman::~Walkman(){}//destructor
