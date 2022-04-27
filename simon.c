#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	char ss[10] = "simon says";
	char caractere;
	char x[30]; //string que sera introduzida
	char y[30];
	int retorno;
	int i = 0, j;
	for(j=0; j<t; j++)
	{
		do
		{
			caractere = getchar();
			x[i] = caractere;
			i++;
			
		} while(caractere != '\n');
		x[i-1] = '\0';
		
		y[j] = x;
	}
	
	printf("%s", y);

	
}
