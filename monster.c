#include "funkc.h"

Monster::Monster(string name,int lvl,int attack,int hp,const char tex[100])
{	
	this->name = name;
	this->lvl = lvl;
	this->attack = attack;
	this->hp = hp;
	strcpy(this->tex,tex);
}
