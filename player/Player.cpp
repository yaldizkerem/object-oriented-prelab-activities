#include"Player.h"
#include<iostream>
using namespace std;
Player::Player(int maxVolumeLevel){//counstructor
  this->maxVolumeLevel=maxVolumeLevel;//assing
}
Player::~Player(){}//destructor
void Player::Close(){
  cout<<"Player : Closed..."<<endl;//output
}
void Player::Open(){
  cout<<"Player : Opened..."<<endl;//output
}
void Player::Pause(){
  cout<<"Player : Pausing the media "<<mediaName<<endl;//output
}
void Player::Play(){
  cout<<"Player : Playing the media "<<mediaName<<endl;//output
}
void Player::Stop(){
  cout<<"Player : Stopping the media "<<mediaName<<endl;//output
}
void Player::VolumeDown(int amount){
  this->volumeLevel-=amount;//assign
  cout<<"Player : Volume Level : "<<volumeLevel<<endl;//output
}
void Player::VolumeUp(int amount){
  this->volumeLevel+=amount;//assign
  cout<<"Player : Volume Level : "<<volumeLevel<<endl;//output
}
