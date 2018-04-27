#include "stdafx.h"
#include "Bottle.h"


Bottle::Bottle(int pintRadius, int pintHeight)
{
	isOpen = false;
	intHeight = pintHeight;
	intRadius = pintRadius;
	intContentHeight = intHeight;
}


Bottle::~Bottle()
{
}


void Bottle::open()
{
	this->isOpen = true;
}


void Bottle::close()
{
	this->isOpen = false;
}


void Bottle::add(int intContent)
{
	if (intContent < 0) {
		std::cerr << "Warning: Bottle::add - Content cannot be negative.";
		return;
	}
	this->intContentHeight += intContent;
	if (this->intContentHeight > this->intHeight) {
		this->intContentHeight = this->intHeight;
	}
}


void Bottle::remove(int intContent)
{
	if (intContent < 0) {
		std::cerr << "Warning: Bottle::remove - Content cannot be negative.";
		return;
	}
	this->intContentHeight -= intContent;
	if (this->intContentHeight < 0) {
		this->intContentHeight = 0;
	}
}


double Bottle::getPercentFull()
{
	return 0.0;
}


bool Bottle::isClosed()
{
	return !this->isOpen;
}


int Bottle::volume()
{
	return 3.14 * pow(this->intRadius,2) * this->intHeight;
}


void Bottle::empty()
{
	this->intContentHeight = 0;
}


int Bottle::filp()
{
	return 0;
}
