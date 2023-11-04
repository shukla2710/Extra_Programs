
#include<stdio.h>
main()
{
	int a=10, b=20;
	
	printf("\n\n a = %d",a);
	printf("\n\n b = %d",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n After Swapping....");
	printf("\n\n a = %d",a);
	printf("\n\n b = %d",b);
}
