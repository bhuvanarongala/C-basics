#include<stdio.h>
main()
{
	int i,n,fc=0;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
		fc++;
	    }
   }
   if(fc==2)
   {
   	printf("prime");
   }
   else
   {
   	printf("not prime");
   }
}
