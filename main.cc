#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "character.h"
#include "monster.h"
#include "non-player.h"
using namespace std;

int main()
{
	std::cout << "Hello world!" << std::endl;
	srand(time(0));
	int randomNum = (rand() % 2);
	if (randomNum < 1){
		Monster* char1 = new Monster(1, 1, 1, 1);
		(*char1).MouseClicked();
		(*char1).nonVirtual();
		delete char1;
		char1 = NULL;
	}
	else if (randomNum >= 1){
		nonPlayer* char1 = new nonPlayer(true, 1, 1);
		(*char1).MouseClicked();
		(*char1).nonVirtual();
		delete char1;
		char1 = NULL;
	}

	std::cin.get();
	return 0;
}
