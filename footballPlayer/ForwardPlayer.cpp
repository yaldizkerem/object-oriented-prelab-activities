#include<iostream>
#include"ForwardPlayer.h"
using namespace std;
ForwardPlayer::ForwardPlayer(const string& name, int age, double paymentPerYear, double paymentPerGoal_):FootballPlayer(name,age,paymentPerYear),paymentPerGoal(paymentPerGoal_){}

ForwardPlayer::~ForwardPlayer(){

}
double ForwardPlayer::CalculatePaymentForThisYear(){
  return paymentPerYear+paymentPerGoal*goalCount;//calculating and returning paymentforthis year
}
int ForwardPlayer::getGoalCount(){
  return goalCount;
}
void ForwardPlayer::setGoalCount(int goalCount_){
  goalCount=goalCount_;//align
}
void ForwardPlayer::ThrowYourSelf(){
  cout<<getName()<<" is throwing himself..."<<endl;//output
}
void ForwardPlayer::TryDribblePast(const Player* player){
  cout<<getName()<<" is tring a dribble past on "<<player->getName()<<endl;//output
}
