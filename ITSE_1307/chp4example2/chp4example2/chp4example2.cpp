// chp4example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double dblAlpha = 5;
	double dblBravo = 7;
	double dblCharlie = 8;

	double dblSimpleLargest = (dblAlpha > dblBravo) ? dblAlpha : dblBravo;
	double dblLargest = (dblAlpha > dblBravo) ? ((dblAlpha > dblCharlie) ? dblAlpha : dblCharlie) : ((dblBravo > dblCharlie) ? dblBravo : dblCharlie);
	cout << "Conditional: " << dblSimpleLargest << endl;
	cout << "Conditional: " << dblLargest << endl;

	cout << "Largest to Smallest" << endl;
	if ((dblAlpha < dblBravo) && (dblBravo < dblCharlie)) {
		cout << dblCharlie << " | " << dblBravo << " | " << dblAlpha << endl;
	} else if ((dblAlpha < dblBravo) && (dblBravo > dblCharlie)) {
		cout << dblBravo << " | " << dblCharlie << " | " << dblAlpha << endl;
	}

	//cout << dblAlpha << " | " << dblBravo << " | " << dblCharlie << endl;

    return 0;
}

