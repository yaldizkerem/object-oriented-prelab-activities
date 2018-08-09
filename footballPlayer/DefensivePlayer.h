#pragma once
#include "FootballPlayer.h"
class DefensivePlayer :
	public FootballPlayer
{
	double paymentPerMatch;
	int playedMatchCount;
public:
	DefensivePlayer(const string& name, int age, double paymentPerYear, double paymentPerMatch);
	~DefensivePlayer();
	double CalculatePaymentForThisYear();
	void Defense();
	int getPlayedMatchCount();
	void setPlayedMatchCount(int playedMatchCount);
	void TripUp(const Player* player);
};
