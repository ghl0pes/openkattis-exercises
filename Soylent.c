#include<stdio.h>
int main ()
{
	int bot = 0,cal,num,k;
	int ca[1024];
	int i;
	
	scanf("%d",&num);
	
	for(i=0; i<num; i++)
	{
		scanf("%d", &cal);
		
		for(k = 0, bot = 0; k < cal; k+=400)
		{
			bot++;
			ca[i] = bot;
		}
	}
	
	for(i=0; i<num;i++)
	{
		printf("%d\n", ca[i]);
	}
}
