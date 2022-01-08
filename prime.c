#include<stdio.h>
main()
{
	int i,n,fc=0;
	scanf("%d",&n);
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			fc++;
			
		}
	}
	if(fc==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}

