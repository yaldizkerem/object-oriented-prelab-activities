#include<iostream>
#include"FootballPlayer.h"
using namespace std;
FootballPlayer::FootballPlayer(const string& name, int age, double paymentPerYear_):Player(name,age),paymentPerYear(paymentPerYear_){}//callment of base constructor
FootballPlayer::~FootballPlayer(){

}
double FootballPlayer::getPaymentPerYear(){
  return paymentPerYear;
}
void FootballPlayer::Pas(const Player* player){
  cout<<getName()<<"is passing to "<<player->getName()<<endl;
}
void FootballPlayer::setPaymentPerYear(double paymentPerYear_){
  paymentPerYear=paymentPerYear_;//align paymentPerYear
}
void FootballPlayer::Shot(){
  cout<<getName()<<" is shotting !"<<endl;//output
}
