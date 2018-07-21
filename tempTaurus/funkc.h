#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <unistd.h> // for usleep function
using namespace std;

 


const int START_LVL = 1;
const int START_ATTACK = 0;
const int START_DEFENCE = 0;
const int START_HP = 100;
const int START_MP = 0;


class Monster
{
public:
	string name;
	int lvl;
	int attack;
	int hp;
	char tex[100];

	Monster(string name,int lvl,int attack,int hp,const char tex[100]);
};


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
	void go(Monster*);
	void shaker();
	void battleOptions(Monster*);
		void battleOptionsWarrior(Monster*);
		void battleOptionsMage(Monster*);
		void battleOptionsThief(Monster*);
	void newTurn(Monster*);
	void endTurn(Monster* monster);
	void Attack(Monster* monster);
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
void won();
//anim
void goWarrior(Monster*);
void goMage(Monster*);
void goThief(Monster*);
void shakerWarrior();
void shakerMage();
void shakerThief();
void perish();
void Battle(Character *player, Monster *enemy);
