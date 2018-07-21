#include "funkc.h"
#include "textures.c"

void space(int n)
{
	for(int i=0;i<n;i++)
	printf("\n");
}



void goWarrior()
{
		clean();
		space(N);
		printf("%s",stickWarrior);
		usleep(100000);
for(int i=0;i<N;i++)
	{	
		clean();
		space(N-i);
		printf("%s",missileWarrior1);
		space(i);
		printf("%s",stickWarriorHandsUp);
		usleep(50000);
	}
}
void goMage()
{
		clean();
		space(N);
		printf("%s",stickMage);
		usleep(100000);
for(int i=0;i<N;i++)
	{	
		clean();
		space(N-i);
		printf("%s",missileMage1);
		space(i);
		printf("%s",stickMageHandsUp);
		usleep(50000);
	}
}

void goThief()
{
		clean();
		space(N);
		printf("%s",stickThief);
		usleep(100000);
for(int i=0;i<N;i++)
	{	
		clean();
		space(N-i);
		printf("%s",missileThief1);
		space(i);
		printf("%s",stickThiefHandsUp);
		usleep(50000);
	}
}
