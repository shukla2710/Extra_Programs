/*A leap year is a year, which is different than a normal year having 366 days instead of 365.

A leap year comes once in four years, in which February month has 29 days. 
With this additional day in February, a year becomes a Leap year.

Some leap years examples are - 1600, 1988, 1992, 1996, and 2000.
Although 1700, 1800, and 1900 are century years, not leap years.

Below conditions are used to check that year is a leap year or not.
      -Year must be divisible by 4
      -Year is divisible by 400 and not divisible by 100.

By putting these conditions in your code, you can check year is a leap year or not. 
If the above conditions are satisfied, the year will be leap year.  */

#include<stdio.h>  
main() 
{  
    int year;  
    
	printf("Enter a year: ");  
    scanf("%d", &year);  
    
    if((  (year % 4 == 0) && (year % 100!= 0)  )    || (year%400 == 0)  )
    {  
        printf("%d is a leap year...", year);  
    } 
	else 
	{  
        printf("%d is not a leap year..", year);  
    }  
}
