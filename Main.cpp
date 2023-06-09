#include <iostream>
#include "CDiceGame.h"

using namespace std;

int main()
{
	int total;

	CDiceGame d1;
	CDiceGame d2;

	cout << "Rolling the dice..." << endl;

	d1.roleDice();
	cout << "Die 1: " << d1.getNum() << endl;

	d2.roleDice();
	cout << "Die 2: " << d2.getNum() << endl;

	total = d1.getNum() + d2.getNum();
	cout << "Total value: " << total << endl;

	if (total > 7)
	{
		cout << "You won!" << endl;
	}
	else
	{
		cout << "You lost" << endl;
	}

	return 0;
}