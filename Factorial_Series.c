#include<stdio.h>
main()
{
	int i, n, fact;
	
	printf("\n\n Enter a number for factorial  : ");
	scanf("%d",&n);
	
	if(n<0)
		printf("\n\n Factorial is not possible with the entered number.. ");
	
	printf("\n");
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf(" %d *", i);
	}
	printf("\n\n Factorial Number  = %d ",fact);
}

