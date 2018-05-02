#include "stdafx.h"
#include "DiscardPile.h"


DiscardPile::DiscardPile()
{
	this->clear();
}


DiscardPile::~DiscardPile()
{
	this->vtrDiscardPile.clear();
}


void DiscardPile::clear()
{
	this->vtrDiscardPile.clear();
}


Card DiscardPile::getTopCard()
{
	return this->vtrDiscardPile.at(this->vtrDiscardPile.size() - 1);
}


void DiscardPile::addCard(Card cardDiscarded)
{
	if (this->checkValidCard(cardDiscarded)) {
		this->vtrDiscardPile.push_back(cardDiscarded);
	}
}


bool DiscardPile::checkValidCard(Card cardIsValid)
{
	return (this->getTopCard().getFaceValue() == cardIsValid.getFaceValue() ||
		this->getTopCard().getSuiteValue() == cardIsValid.getSuiteValue());
}
