
#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include <iostream>
using std::cout;
using std::endl;

class Character
{
public:
	Character(int health, int size);
	
	virtual void MouseClicked()=0;

	void setHealth(int newHealth);

	void setSize(int newSize);

	void displayStats();
	
	int getHealth();

	int getSize();

	virtual ~Character();

	void nonVirtual();

protected:
	int health;
	int size;
private:

};

#endif // _CHARACTER_H_

