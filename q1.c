/*Write a C program to swap two numbers without using third variable.*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapped numbers are : %d %d\n",a,b);
	return 0;
}

