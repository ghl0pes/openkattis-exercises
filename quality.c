#include<stdio.h>
int main()
{
	float casos[1024];
	int num;
	int i;
	float q,y, soma = 0.00;
	
	scanf("%d", &num);
	
	for(i=0; i<num;i++)
	{
		scanf("%f %f", &q, &y);
		casos[i] = q * y;
		soma = soma + casos[i];
 	}
 	
 	printf("%.3f", soma);
}
