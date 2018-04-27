#pragma once
#include <iostream>
#include <cmath>

class Bottle
{
public:
	Bottle(int intRadius, int intHeight);
	~Bottle();
private:
	bool isOpen;
	int intHeight;
	int intRadius;
	int intContentHeight;
public:
	void open();
	void close();
	void add(int intContent);
	void remove(int intContent);
	double getPercentFull();
	bool isClosed();
	int volume();
	void empty();
	int filp();
};

