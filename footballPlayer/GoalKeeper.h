#pragma once
#include "FootballPlayer.h"
class GoalKeeper :
	public FootballPlayer
{
public:
	GoalKeeper(const string name, int age, double paymentPerYear);
	~GoalKeeper();
	double CalculatePaymentForThisYear();
	void FlyAndTryCatch();
};

