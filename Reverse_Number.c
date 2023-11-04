
#include<stdio.h>
main()
{
	int num, rem=0;
	
	printf("\n\n Enter a number to reverse : ");
	scanf("%d",&num);
	printf("\n\n");
	while(num>0)
	{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
}
