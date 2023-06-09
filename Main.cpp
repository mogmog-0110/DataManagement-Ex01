#include <iostream>
#include "CDiceGame.h"

using namespace std;

int main()
{
	string name;
	cout << "What is your name?" << endl;

	cin >> name;

	cout << "Hello, " << name << "!" << endl;

	CDiceGame d1;
	CDiceGame d2;

	cout << "Rolling the dice..." << endl;

	d1.roleDice();
	cout << "Die 1: " << d1.getNum() << endl;

	d2.roleDice();
	cout << "Die 2: " << d2.getNum() << endl;

	cout << "Total value: " << d1.getNum() + d2.getNum() << endl;
	return 0;
}