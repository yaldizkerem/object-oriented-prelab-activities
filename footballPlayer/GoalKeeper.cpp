#include<iostream>
#include"GoalKeeper.h"
using namespace std;
GoalKeeper::GoalKeeper(const string name, int age, double paymentPerYear):FootballPlayer(name,age,paymentPerYear){}
GoalKeeper::~GoalKeeper(){

}
double GoalKeeper::CalculatePaymentForThisYear(){
  return paymentPerYear;
}
void GoalKeeper::FlyAndTryCatch(){
  cout<<getName()<<" is flying and trying to catch ..."<<endl;//output
}
