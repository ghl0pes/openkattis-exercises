#include<stdio.h>
int main()
{
	char nome[1024],guardar[1024];
	scanf("%s",&nome);
	int i,j=1;
	guardar[0]=nome[0];
	for(i=1;nome[i]!='\0';i++)
	{
		if(nome[i]==45) 
		{
			i++;
			guardar[j]=nome[i];
			i--;
			j++;
		}
	}

	for(i=0;guardar[i]!='\0';i++)
	{
		printf("%c",guardar[i]);
	}
		
}
