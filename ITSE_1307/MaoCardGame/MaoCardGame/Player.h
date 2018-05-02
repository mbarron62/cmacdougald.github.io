#pragma once
#include <vector>
#include "Card.h"

class Player
{
public:
	Player();
	~Player();
	void showHand();
	void clearHand();
	int getNumberOfCards();
	Card removeCardFromHand(int intCardIndex);
	void addCardToHand(Card cardAdding);
	int getBet();

private:
	int intBet;
	std::vector <Card> vtrHand;
public:
	void inputBet();
	void setBet(int intBet);
	void printHand();
};

