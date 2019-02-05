#pragma once
#include <string>

class Player
{
public: 
	Player(std::string name);
	std::string getName();
	int getScore();
	void addScore(int turnScore);
private:
	std::string name_;
	int score_;
};
