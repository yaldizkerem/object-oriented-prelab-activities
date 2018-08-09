#include"IPod.h"
#include<iostream>
using namespace std;
void IPod::BackWard(){
  cout<<"I Pod : Backward the music "<<mediaName<<endl;//output
}
void IPod::ForWard(){
  cout<<"I Pod : Forward the music "<<mediaName<<endl;//output
}
void IPod::VolumeDown(int amount){
  Player::VolumeDown(amount);//upcast
  cout<<"I Pod : Adjusting Equaliser"<<endl;//output
}
void IPod::VolumeUp(int amount){
  Player::VolumeUp(amount);//upcast
  cout<<"I Pod : Adjusting Equaliser"<<endl;//output
}
//counstructor
IPod::IPod(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount):MusicPlayer(maxVolumeLevel,supportedFormats,supportedFormatsCount){}
IPod::~IPod(){}//destructor
