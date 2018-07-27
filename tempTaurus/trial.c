#include "funkc.h"
#include "textures.c"
void trial(Character *player)
{
	player->showPlayer();
	tiaw();
	clean();
	cout<<"Here is written heartwarming story about your past, and some ridiculous reason, why u have to beat some ugly guy, who told you that you are gay."<<endl<<endl;
	  tiaw();
	  clean();
	  Battle1(player);

}

void Battle1(Character *player)
{
	switch(chooseBattle1())
		{
			case 1:
			{
				Monster *rat = new Monster("Brutal Rat",1,10,30,rat1);
				tiaw();
				Duel(player,rat);
				delete rat;
				break;
			}
			case 2:
			{	seal();
				break;
			}
			case 3:
			{
				destiny();
				break;
			}	
			default:
			{
				failure();
				break;
			}
		}
}

int chooseBattle1()
{
	cout<<"1. Brutal Rat"<<endl;
	cout<<"2. Door"<<endl;
	cout<<"3. Your Destiny"<<endl;

	cout<<"Choose your opponent(1/2/3):";
	int choice;
	cin>> choice;
	return choice;
}

void seal()
{
		clean();
		cout<<"These doors are protected by a POWERFUL SEAL!"<<endl;
		wait();
		clean();
		cout<<"OU OU BITCHES!"<<endl;
		tiaw();
		clean();
		cout<<"POWERFUL SEAL is too strong. You die."<<endl;
		tiaw();
		clean();
		lost();
}

void destiny()
{
	clean();
				cout<<"No one can win against its destiny."<<endl;
				wait();
				clean();
				cout<<"You die."<<endl;
				tiaw();
				clean();
				lost();
}
