#include "funkc.h"
#include "textures.c"
void Duel(Character *player, Monster *enemy)
{
	clean();
	cout<<"LET THE BATTLE BEGIN"<<endl;
	wait();
	clean();
	cout<<"A fight between a \""<< player->name<<"\" and a \""<<enemy->name <<"\""<<endl;
	player->shaker();
	Battle(player,enemy);
	tiaw();
}

void Battle(Character *player, Monster *enemy)
{
	while(player->hp>0 && enemy->hp>0)
	{
		player->battleOptions(enemy);
		player->endTurn(enemy);
		player->newTurn(enemy);

	}
	if(player->hp>0)
	{
		won();
		perish();

	}
	else
	{
		lost();
		
	}
}

void Character::battleOptions(Monster *enemy)
{
if(!strcmp(this->profession,"Warrior"))
	{
		this->battleOptionsWarrior(enemy);
	}
	else if(!strcmp(this->profession,"Mage"))
		{
			this->battleOptionsMage(enemy);
		}
		else if(!strcmp(this->profession,"Thief"))
			{
			this->battleOptionsThief(enemy);
			}
			else 
			{
				failure();
			}


}


void Character::battleOptionsWarrior(Monster *enemy)
{
	cout<<"1. Attack"<<endl;
	cout<<"2. Defence"<<endl;
	cout<<"3. Health Potion"<<endl;
	
	cout<<"Choose (1/2/3):";
	int choice;
	cin>> choice;
	switch(choice)
		{
			case 1:
			{
				this->Attack(enemy);
				break;
			}

			case 2:
			{
				break;
			}

			case 3:
			{
				break;
			}


		}

	
}
void Character::battleOptionsMage(Monster *enemy)
{
	cout<<"1. Attack "<<endl;
	cout<<"2. Damaging Spell"<<endl;
	cout<<"3. Healing Spell"<<endl;
	
	cout<<"Choose (1/2/3):";
	int choice;
	cin>> choice;
	switch(choice)
		{
			case 1:
			{
				this->Attack(enemy);
				break;
			}

			case 2:
			{
				break;
			}

			case 3:
			{
				break;
			}


		}

	
}
void Character::battleOptionsThief(Monster *enemy)
{
	cout<<"1. Attack"<<endl;
	cout<<"2. Hide"<<endl;
	cout<<"3. Exit"<<endl;
	
	cout<<"Choose (1/2/3):";
	int choice;
	cin>> choice;
	switch(choice)
		{
			case 1:
			{
				this->Attack(enemy);
				break;
			}

			case 2:
			{
				break;
			}

			case 3:
			{
				break;
			}


		}

	
}
void Character::newTurn(Monster* monster)
{
	cout<<"Your hp ="<<this->hp<<". Enemy hp = "<<monster->hp<<"."<<endl;

}
void Character::endTurn(Monster* monster)
{

//this->hp += 3;
this->mp += 2;

monster->hp += 2;
}
void Character::Attack(Monster* monster)
{
	this->go(monster);
	monster->hp -= this->attack;
}