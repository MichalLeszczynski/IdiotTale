#include "funkc.h"

Character::Character()
{	
	clean();
	cout<<"Insert your name:"<<endl;
	cin>>this->name;
	clean();
	this->lvl = START_LVL;
	this->attack = START_ATTACK;
	this->defence = START_DEFENCE;
	this->hp = START_HP;
	this->mp = START_MP;
	classChoice();
}

void Character::showPlayer()
{
	clean();
	cout<<"PLAYERS PROFILE:"<<endl<<endl;
	cout<<"Name: "<<this->name<<endl;
	cout<<"Class: "<<this->profession<<endl<<endl;
	cout<<"YOUR STATS: "<<endl;
	cout<<"Lvl: "<<this->lvl<<endl;
	cout<<"Attack: "<<this->attack<<endl;
	cout<<"Defence: "<<this->defence<<endl;
	cout<<"Helath points: "<<this->hp<<endl;
	cout<<"Mana points: "<<this->mp<<endl;

	//wait();
}

void Character::classChoice()
{
	cout<<"Choose your class (1.warrior/2.mage/3.thief): "<<endl;
	int choice;
	cin>>choice;
	clean();
	switch(choice)
		{
			case 1:
			{
				cout<<"You have chosen Warrior!"<<endl;
				strcpy(this->profession,"Warrior");
				wait();
				setWarrior();
				showPlayer();
				break;
			}
			case 2:
			{
				cout<<"You have chosen to be a Mage!"<<endl;
				strcpy(this->profession,"Mage");
				wait();
				setMage();
				showPlayer();
				break;
			}
			case 3:
			{
				cout<<"You have chosen to be a Thief!"<<endl;
				strcpy(this->profession,"Thief");
				wait();
				setThief();
				showPlayer();
				break;
			}
		}
}

void Character::setWarrior()
{
this->attack += 10;
this->defence += 5;
this->hp += 50;
this->mp += 0;
}

void Character::setMage()
{
this->attack += 5;
this->defence += 1;
this->hp += 0;
this->mp += 50;
}

void Character::setThief()
{
this->attack += 15;
this->defence += 2;
this->hp += 25;
this->mp += 10;
}
