#include<stdio.h>
#include<math.h>

int main()
{
	int s1,s2,s3,s4;
	double d1,d2;
	double h1,h2;
	double a1,a2;
	
	scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
	
	d1 = sqrt(pow(s1,2)+pow(s2,2));
	d1 = d1/2;
	h1 = sqrt(pow(s2,2)-pow(d1,2));
	a1 = d1*h1;
	
	d2 = sqrt(pow(s3,2)+pow(s4,2));
	d2 = d2/2;
	h2 = sqrt(pow(s4,2)-pow(d2,2));
	a2 = d2*h2;
	
	printf("%lf", a1+a2);
	
}
