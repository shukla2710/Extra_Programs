
#include<stdio.h>
main()
{
	int num, sum=0, firstdig, lastdig;
	
	printf("\n\n Enter a number to reverse : ");
	scanf("%d",&num);
	
	lastdig=num%10;
	printf("\n\n");
	while(num>=10)
	{
		
		num=num/10;
	}
	
	firstdig=num;
	sum=firstdig+lastdig;
	
	printf("\n The sum of first & last digit : %d",sum);
}
