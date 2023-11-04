

#include<stdio.h>
main()
{
	int num, rem=0,sum=0;
	
	printf("\n\n Enter a number : ");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	
	printf("\n\n Sum of digits : %d",sum);
}
