
#ifndef _NON_PLAYER_H_
#define _NON_PLAYER_H_
#include "character.h"
class nonPlayer: public Character 
{
public:
	nonPlayer(bool talkative, int health, int size);
	 
	virtual void MouseClicked();

	void setTalk(bool talk);

	void displayStats();
	
	void getTalk();

	void nonVirtual();
		 
protected:

private:
	bool talkative;
};

#endif // _NON_PLAYER_H_

