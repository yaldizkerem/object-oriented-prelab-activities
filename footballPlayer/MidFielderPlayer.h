#pragma once
#include "FootballPlayer.h"
class MidFielderPlayer :
	public FootballPlayer
{
	int assistCount;
	double paymentPerAssist;
public:
	MidFielderPlayer(const string& name, int age, double paymentPerYear, double paymentPerAssist);
	~MidFielderPlayer();
	double CalculatePaymentForThisYear();
	int getAssistCount();
	void Press();
	void setAssistCount(int assistCount);
	void TryThroughBall(const Player* player);
};

