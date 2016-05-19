#include <iostream>
#include "non-player.h"

	nonPlayer::nonPlayer(bool talkative, int health, int size):
	Character(health, size){
		setTalk(talkative);
	};

	void nonPlayer::setTalk(bool talk){
		talkative = talk;
	}

	void nonPlayer::MouseClicked(){
		cout << "What do you want to trade" << endl;
	}

	void nonPlayer::getTalk(){
		if(talkative){
			cout << "talkative";
		} else {
			cout << "non-talkative";
		}
	}

	void nonPlayer::displayStats(){
		cout << "I am ";
		getTalk();
		cout << " and ";
		Character::displayStats();
	}

	void nonPlayer::nonVirtual(){
		cout << "NPC" << endl;
	}
