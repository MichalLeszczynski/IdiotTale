#include "funkc.h"
#include "textures.c"
void Duel(Character *player, Monster *enemy)
{
	clean();
	cout<<"LET THE BATTLE BEGIN"<<endl;
	tiaw();
	clean();
	cout<<"A fight between a \""<< player->name<<"\" and a \""<<enemy->name <<"\""<<endl;
	player->shaker();
	Battle(player,enemy);
}

void Battle(Character *player, Monster *enemy)
{
	player->tempAttack=player->attack;
	player->tempDefence=player->defence;
	while(player->hp>0 && enemy->hp>0)
	{	
		player->battleStats(enemy);
		player->battleOptions(enemy);
		player->endTurn(enemy);
		player->newTurn(enemy);

	}
	if(player->hp>0)
	{
		perish();
		won();
		player->lvlUp();
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
	cout<<"1. Attack ("<<this->tempAttack<<" dmg)"<<endl;
	cout<<"2. Defence (player +1 defence)"<<endl;
	cout<<"3. Health Potion (+30 health)"<<endl;
	
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
				healWarrior(enemy);
				this->tempDefence+=1;
				break;
			}

			case 3:
			{
				healWarrior(enemy);
				this->hp+=30;
				break;
			}


		}

	
}
void Character::battleOptionsMage(Monster *enemy)
{
	cout<<"1. Attack ("<<this->tempAttack<<" dmg)"<<endl;
	cout<<"2. Damaging Spell (20 dmg, 10 mana)"<<endl;
	cout<<"3. Healing Spell (+20 hp, 10 mana)"<<endl;
	
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
				if(this->mp>=10)
				{
				this->mageSpell(enemy);
				enemy->hp-=20;
				this->mp-=10;
				}
				else
				{
					cout<<"Failed to cast..."<<endl;
				}

				break;
			}

			case 3:
			{
				if(this->mp>=10)
				{
					healMage(enemy);
				this->mp-=10;
				this->hp+=20;
				}
				else
				{
					cout<<"Failed to cast..."<<endl;
				}
				break;
			}


		}

	
}
void Character::battleOptionsThief(Monster *enemy)
{
	cout<<"1. Attack ("<<this->tempAttack<<" dmg)"<<endl;
	cout<<"2. Hide (enemy -1 attack)"<<endl;
	cout<<"3. Poison Arrrow (player +1 attack)"<<endl;
	
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
				healThief(enemy);
				enemy->attack-=1;
				break;
			}

			case 3:
			{
				healThief(enemy);
				this->tempAttack+=1;
				break;
			}


		}

	
}
void Character::newTurn(Monster* monster)
{
	

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
	monster->hp -= this->tempAttack;
}

void Character::battleStats(Monster *monster)
{
	cout<<"Your hp ="<<this->hp<<". Enemy hp = "<<monster->hp<<"."<<endl;
	cout<<"Your mana ="<<this->mp<<". Your Attack = "<<this->tempAttack<<"."<<endl;
	cout<<"Your defence ="<<this->tempDefence<<endl;

}

