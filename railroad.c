#include<stdio.h>
int main ()
{
	int x, y;
	scanf("%d %d",&x, &y);
	
	if(y%2 == 0)
	{
		printf("possible");
	}
	else
	{
		printf("impossible");
	}
}
