#include "CDiceGame.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void CDiceGame::roleDice()
{
	int n = rand() % 6 + 1;
	setNum(n);
}

void CDiceGame::setNum(int n)
{
	this->num = n;
}

int CDiceGame::getNum()
{
	return this->num;
}
