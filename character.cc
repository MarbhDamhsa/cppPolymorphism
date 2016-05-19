#include "character.h"
#include <iostream>

using std::cout;
using std::endl;

	Character::Character(int health, int size)
	{
//		cout << "Creating!" << endl;
		setHealth(health);
		setSize(size);
	}

	void MouseClicked();

	void Character::setHealth(int newHealth){
		health = newHealth;
	}

	void Character::setSize(int newSize){
		size = newSize;
	}

	void Character::displayStats(){
		cout << "I am size " << size << ".\n";
	}

	int Character::getHealth(){
		return health;
	}

	int Character::getSize(){
		return size;
	}

	
	void nonVirtual(){
		cout << "Character" << endl;
	}

	Character::~Character()
	{
		cout << "Boom! Headshot!" << endl;
	}


