#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <iostream>
#include <string>

using namespace std;
class Player
{
protected:
	int age;
	string name;
public:
	enum Direction { EAST, NORTH, NORTH_EAST, NORTH_WEST, SOUTH, SOUTH_EAST, SOUTH_WEST, WEST};
	Player(const string & name, int age);
	~Player();
	int getAge();
	const string & getName() const;
	void Move(Direction direction);
private:
	void MoveEast();
	void MoveNorth();
	void MoveNorthEast();
	void MoveNorthWest();
	void MoveSouth();
	void MoveSouthEast();
	void MoveSouthWest();
	void MoveWest();
};

#endif
