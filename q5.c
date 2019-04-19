/*Write a C program to find out given year is leap year or not*/

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the year\n");
	scanf("%d",&n);
	if(n%100==0)
	{
		if(n%400==0)
			printf("It is a leap year \n");
		else 
 			printf("It is not a leap year \n");
	}
	else if(n%4==0)
		printf("It is a leap year \n");

	else 
		printf("It is not a leap year \n");
}
