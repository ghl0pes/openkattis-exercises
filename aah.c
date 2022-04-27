#include<stdio.h>
#include<string.h>
int main()
{
    char a[1024];
    char m[1024];
    
    scanf("%s",&a);
    scanf("%s",&m);
  
    if(strlen(a)>=strlen(m))  printf("go");
    else if(strlen(a)<strlen(m)) printf("no");

    return 0;
}
