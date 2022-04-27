#include<stdio.h>

int main()
{
	int x,y,z;
	char str[2]={};
	
	scanf("%d %d %d",&x,&y,&z);
	gets(str);
	
	printf("%d %d %d",x,y,z);
	puts(str);
	
}
