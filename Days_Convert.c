#include<stdio.h>
main()
{
	int days, years,weeks, months;
	printf("\n\n Enter a numbers of days : ");
	scanf("%d",&days);
	years =days / 365;
	weeks =days / 7;
	months =days / 30;
	printf("\n\n Days to Years: %d",years);
	printf("\n\n Days to Weeks: %d",weeks);
	printf("\n\n Days to Months:%d",months);
}
