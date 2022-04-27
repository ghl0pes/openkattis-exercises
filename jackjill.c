#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d",&n, &m);

	
	int i,x,ja[1024],ji[1024],cdja,cdji;
	if((n<100000000)&&(m<1000000000))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&cdja);
			ja[i]=cdja;
		}
		for(x=0;x<m;x++)
		{
			scanf("%d",&cdji);
			ji[x]=cdji;
		}
		int moda = 0;
		for(i=0;i<n;i++)
		{
			for(x=0;x<m;x++)
			{
				if(ja[i] == ji[x])
				{
					moda++;
				}
			}
		}
		int zeros1,zero2;
		scanf("%d %d",&zeros1,&zero2);
		printf("%d", moda);
	
	}
	else
	{
		return 0;
	}
}
