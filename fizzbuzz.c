#include<stdio.h>
int main()
{
	int x,y,n,i;
	scanf("%d %d %d",&x,&y,&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%x==0)
		{
			if(i%y==0)
				printf("FizzBuzz\n");
			else printf("Fizz\n");
		}
		else
		{
			if(i%y==0)
				printf("Buzz\n");
			else
				printf("%d\n",i);
		}
			
	}
}
