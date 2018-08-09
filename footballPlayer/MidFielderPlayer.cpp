#include<iostream>
#include"MidFielderPlayer.h"
using namespace std;
MidFielderPlayer::MidFielderPlayer(const string& name, int age, double paymentPerYear, double paymentPerAssist_):FootballPlayer(name,age,paymentPerYear),paymentPerAssist(paymentPerAssist_){}
MidFielderPlayer::~MidFielderPlayer(){

}
double MidFielderPlayer::CalculatePaymentForThisYear(){
  return paymentPerYear+paymentPerAssist*assistCount;//calculating and returning paymentforthisyear
}
int MidFielderPlayer::getAssistCount(){
  return assistCount;
}
void MidFielderPlayer::Press(){
  cout<<getName()<<" is pressing..."<<endl;//output
}
void MidFielderPlayer::setAssistCount(int assistCount_){
  assistCount=assistCount_;//align
}
void MidFielderPlayer::TryThroughBall(const Player* player){
  cout<<getName()<<" is trying a through ball to "<<player->getName()<<endl;//output
}
