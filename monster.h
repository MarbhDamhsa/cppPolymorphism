#ifndef _MONSTER_H_
#define _MONSTER_H_
#include "character.h"


class Monster: public Character 
{
public:
	Monster(int maxHit, int minHit, int health, int size);

	virtual void MouseClicked();

	void setMaxHit(int max);

	void setMinHit(int min);

	void displayStats();
	
	int getMaxHit();

	int getMinHit();

	void nonVirtual();
protected:
	int maxHit;
	int minHit;
private:

};

#endif // _MONSTER_H_

