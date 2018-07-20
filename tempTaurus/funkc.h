#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;

const int START_LVL = 1;
const int START_ATTACK = 0;
const int START_DEFENCE = 0;
const int START_HP = 100;
const int START_MP = 0;



class Character
{
public:
	char name[10];
	char profession[10];
	int lvl;
	int attack;
	int defence;
	int hp;
	int mp;

	Character();

	void showPlayer();
	void classChoice();
	void setWarrior();
	void setMage();
	void setThief();
};

class Monster
{
public:
	string name;
	int lvl;
	int attack;
	int hp;

	Monster(string name,int lvl,int attack,int hp);
};

int chooseMenu();
void clean();
void menu();
void wait();
void credits();
bool really();
void newGame();
void trial(Character* player);
int chooseBattle1();
void Battle1(Character*);
void lost();
void Duel(Character *player, Monster *enemy);
void tiaw();
void seal();
void destiny();
void failure();