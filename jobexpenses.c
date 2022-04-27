#include<stdio.h>

int main()
{
	int n,i,ganho;
	int soma = 0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &ganho);
		if(ganho < 0)
		{
			soma = soma + ganho;
		}
	}
	
	printf("%d", -soma);
}
