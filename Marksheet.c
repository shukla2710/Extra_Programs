#include<stdio.h>
main()
{
 	int s1,s2, s3, s4;
 	int total;
 	float per;
 	
 	printf("\n\n\t Input Marks for Sub-1 : ");
 	scanf("%d",&s1);
 	printf("\n\n\t Input Marks for Sub-2 : ");
 	scanf("%d",&s2);
 	printf("\n\n\t Input Marks for Sub-3 : ");
 	scanf("%d",&s3);
 	printf("\n\n\t Input Marks for Sub-4 : ");
 	scanf("%d",&s4);
 	
 	total=s1+s2+s3+s4;
 	per=total/4;
 	printf("\n\n\t Percentages : %.2f",per);
 	
 	if(s1>=40 && s2>=40 && s3>=40 && s4>=40)
 	{
	 
 		if(per>=70)
 		{
 			printf("\n\n\t Result : A+");
		}
		else if(per>=60)
 		{
 			printf("\n\n\t Result : A");
		}
		else if(per>=50)
 		{
 			printf("\n\n\t Result : B");
		}
		else if(per>=40)
 		{
 			printf("\n\n\t Result : C");
		}
	}
	else 
 	{
 		printf("\n\n\t Fail");
	}
	
}
