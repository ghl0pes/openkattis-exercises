#include<stdio.h>
#include<string.h>
int main()
{
	char palavra[30] = {0};
	char newc[30] = {0};
	int i;
	gets(palavra);
	for(i=0;palavra[i] != '\0';i++)
	{
		if(palavra[i] == 's')
		{
			i += 1;
			if(palavra[i] == 's'&&palavra[i] != '\0')
			{
				printf("hiss");
				return;
			}
			else 
			{
				printf("no hiss");
				return;
			}
		}	
	}
	printf("no hiss");
	
}
