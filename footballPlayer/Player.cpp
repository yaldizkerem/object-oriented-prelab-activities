#include<iostream>
#include"Player.h"
using namespace std;

Player::Player(const string & name_, int age_){
  name="'"+name_+"'";//align name inside ''
  age=age_;//align age
}
Player::~Player(){

}

int Player::getAge(){
  return age;
}
const string & Player::getName() const{
  return name;
}
void Player::Move(Direction direction){
  cout<<name<<" is moving to ";
  if(direction==EAST)//if conditions
    MoveEast();
  else if(direction==NORTH)//if conditions
    MoveNorth();
  else if(direction==NORTH_EAST)//if conditions
    MoveNorthEast();
  else if(direction==NORTH_WEST)//if conditions
    MoveNorthWest();
  else if(direction==SOUTH)//if conditions
    MoveSouth();
  else if(direction==SOUTH_EAST)//if conditions
    MoveSouthEast();
  else if(direction==SOUTH_WEST)//if conditions
    MoveSouthWest();
  else if(direction==WEST)//if conditions
    MoveWest();
}
void Player::MoveEast(){
  cout<<"East"<<endl;//outputs
}
void Player::MoveNorth(){
  cout<<"North"<<endl;//outputs
}
void Player::MoveNorthEast(){
  cout<<"North-East"<<endl;//outputs
}
void Player::MoveNorthWest(){
  cout<<"North-West"<<endl;//outputs
}
void Player::MoveSouth(){
  cout<<"South"<<endl;//outputs
}
void Player::MoveSouthEast(){
  cout<<"South-East"<<endl;//outputs
}
void Player::MoveSouthWest(){
  cout<<"South-West"<<endl;//outputs
}
void Player::MoveWest(){
  cout<<"West"<<endl;//outputs
}
