#ifndef CDICEGAME_H_
#define CDICEGAME_H_

#include <cstdlib>
#include <ctime>

class CDiceGame
{
private:
	int num;

public:
	void roleDice();
	int getNum();
	void setNum(int n);

	CDiceGame() : num(0)
	{
		srand(time(NULL));
	}
};

#endif
