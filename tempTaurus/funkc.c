#include "funkc.h"


int chooseMenu()
{
	cout<<"1. New Game"<<endl;
	//cout<<"2. Load Game"<<endl;
	cout<<"2. Credits"<<endl;
	cout<<"3. Exit"<<endl;
	
	cout<<"Choose (1/2/3):";
	int choice;
	cin>> choice;
	return choice;
}

void menu()
{
	bool wantToContinue = true;
	while(wantToContinue)
	{
		clean();
		switch(chooseMenu())
		{
			case 1:
			{
				newGame();
				
				break;
			}
			/*case 2:
			{
				cout<<"To do..."<<endl;
				wait();
				break;
			}*/
			case 2:
			{
				credits();
				break;
			}
			case 3:
			{
				wantToContinue = really();
				break;
			}	
			default:
			{
				cout<<"\nSomething went wrong..."<<endl;
				wait();
				cin.clear();
				fflush(stdin);
				getchar();
				break;
			}
		}
	}
}

void wait()
{
	cout<<"Press enter to continue..."<<endl;
	getchar();
	getchar();
}

void tiaw()
{
	cout<<"Press enter to continue..."<<endl;
	getchar();
}

void clean()
{
	printf("\033[H\033[J");
}

void credits()
{
	clean();
	cout<<"Game made by Michal Leszczynski. TY."<<endl;
	wait();
}

bool really()
{
	clean();
cout<<"Do you really want to exit? <y/n>"<<endl;
				getchar();
				bool importantDecision = true;
				if (getchar()=='y')
					importantDecision = false;
				else
					cout<<"Awww yea!"<<endl;
					wait();
					return importantDecision;
}

void newGame()
{
	Character *player = new Character();
	player->showPlayer();
	trial(player);
	delete player;

}

void lost()
{
	cout<<"You lost. You're fcking looooooser."<<endl;
	tiaw();
}

void Duel(Character *player, Monster *enemy)
{
	clean();
	cout<<"LET THE BATTLE BEGIN"<<endl;
	wait();
	clean();
	cout<<"To do..."<<endl;
	tiaw();
}


void failure()
{
	cout<<"\nSomething went wrong..."<<endl;
				wait();
				cin.clear();
				fflush(stdin);
				getchar();
}