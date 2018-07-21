#include "funkc.h"
#include "textures.c"

void space(int n)
{
	for(int i=0;i<n;i++)
	printf("\n");
}



void goWarrior(Monster *monster)
{
		clean();
		printf("%s",monster->tex);
		space(N);
		printf("%s",stickWarrior);
		usleep(100000);
for(int i=0;i<N;i++)
	{	
		clean();
		printf("%s",monster->tex);
		space(N-i);
		printf("%s",missileWarrior1);
		space(i);
		printf("%s",stickWarriorHandsUp);
		usleep(50000);
	}
}
void goMage(Monster *monster)
{
		clean();
		printf("%s",monster->tex);
		space(N);
		printf("%s",stickMage);
		usleep(50000);
for(int i=0;i<N;i++)
	{	
		clean();
		printf("%s",monster->tex);
		space(N-i);
		printf("%s",missileMage1);
		space(i);
		printf("%s",stickMageHandsUp);
		usleep(50000);
	}
}

void goThief(Monster *monster)
{
		clean();
		printf("%s",monster->tex);
		space(N);
		printf("%s",stickThief);
		usleep(100000);
for(int i=0;i<N;i++)
	{	
		clean();
		printf("%s",monster->tex);
		space(N-i);
		printf("%s",missileThief1);
		space(i);
		printf("%s",stickThiefHandsUp);
		usleep(50000);
	}
}
void shakerWarrior()
{
	for(int i=0;i<N;i++)
	{	
		clean();
		space(N/2);
		printf("%s",stickWarriorHandsUp);
		usleep(50000);
		clean();
		space(N/2);
		printf("%s",stickWarrior);
		usleep(50000);
	}


}
void shakerMage()
{
	for(int i=0;i<N;i++)
	{	
		clean();
		space(N/2);
		printf("%s",stickMageHandsUp);
		usleep(50000);
		clean();
		space(N/2);
		printf("%s",stickMage);
		usleep(50000);
	}


}
void shakerThief()
{
	for(int i=0;i<N;i++)
	{	
		clean();
		space(N/2);
		printf("%s",stickThiefHandsUp);
		usleep(50000);
		clean();
		space(N/2);
		printf("%s",stickThief);
		usleep(50000);
	}


}

void perish()
{

		clean();
		printf("%s",star1);
		usleep(100000);
		clean();
		printf("%s",star2);
		usleep(100000);
		clean();
		printf("%s",star3);
		usleep(100000);
		clean();
		printf("%s",star2);
		usleep(100000);
		clean();
		printf("%s",star1);
		usleep(100000);
		clean();
		printf("%s",star4);
		usleep(100000);
		clean();
		printf("%s",nothing);
		usleep(100000);
}