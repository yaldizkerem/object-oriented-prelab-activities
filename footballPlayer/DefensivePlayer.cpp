#include<iostream>
#include"DefensivePlayer.h"
#include"FootballPlayer.h"
using namespace std;
DefensivePlayer::DefensivePlayer(const string& name, int age, double paymentPerYear, double paymentPerMatch_):FootballPlayer(name,age,paymentPerYear),paymentPerMatch(paymentPerMatch_){}
DefensivePlayer::~DefensivePlayer(){

}
double DefensivePlayer::CalculatePaymentForThisYear(){
  return paymentPerYear+paymentPerMatch*playedMatchCount;//calculating and returning payment for this year
}
void DefensivePlayer::Defense(){
  cout<<getName()<<" is defending..."<<endl;//output
}
int DefensivePlayer::getPlayedMatchCount(){
  return playedMatchCount;
}
void DefensivePlayer::setPlayedMatchCount(int playedMatchCount_){
  playedMatchCount=playedMatchCount_;//align playedMatchCount
}
void DefensivePlayer::TripUp(const Player* player){
  cout<<getName()<<" is tripped up "<<player->getName()<<endl;//output
}
