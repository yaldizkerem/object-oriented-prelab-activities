#pragma once
#include "Player.h"
class FootballPlayer :
	public Player
{
protected:
	double paymentPerYear;
public:
	FootballPlayer(const string& name, int age, double paymentPerYear);
	~FootballPlayer();
	double getPaymentPerYear();
	void Pas(const Player* player);
	void setPaymentPerYear(double paymentPerYear);
	void Shot();
};
