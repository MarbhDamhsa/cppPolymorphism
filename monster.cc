#include "monster.h"
#include "character.h"

	Monster::Monster(int maxHit, int minHit, int health, int size):
	Character(health, size){
		setMaxHit(maxHit);
		setMinHit(minHit);
		//cout << "Creating monster!" << endl;
	}

	void Monster::MouseClicked(){
		cout << "I now attack you" << endl;
	}

	void Monster::nonVirtual(){
		cout << "Monster" << endl;
	}

	void Monster::setMaxHit(int max){
		maxHit = max;
	}

	void Monster::setMinHit(int min){
		minHit = min;
	}

	void Monster::displayStats(){
		cout << "I hit is " << maxHit << " and the min is " << minHit << ". ";
		Character::displayStats();
	}

	int Monster::getMaxHit(){
		return maxHit;
	}

	int Monster::getMinHit(){
		return minHit;
	}
