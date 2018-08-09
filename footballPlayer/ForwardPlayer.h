#pragma once
#include "FootballPlayer.h"
class ForwardPlayer :
	public FootballPlayer
{
	int goalCount;
	double paymentPerGoal;
public:
	ForwardPlayer(const string& name, int age, double paymentPerYear, double paymentPerGoal);
	~ForwardPlayer();
	double CalculatePaymentForThisYear();
	int getGoalCount();
	void setGoalCount(int goalCount);
	void ThrowYourSelf();
	void TryDribblePast(const Player* player);
};

