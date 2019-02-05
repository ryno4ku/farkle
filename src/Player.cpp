#include "Player.h"

Player::Player(std::string name)
	: name_(name)
	, score_(0)
{
}

std::string Player::getName()
{
	return name_;
}

int Player::getScore()
{
	return score_;
}

void Player::addScore(int turnScore)
{
	score_ += turnScore;
}