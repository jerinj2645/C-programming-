/*Write a C program to find out sum & average of n numbers.*/

#include<stdio.h>
void main ()
{
	int n,i,j,sum=0,a;
	printf("Enter the number of terms");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=sum+a;

	}
	float avg =sum/n;
	printf("sum=%d,avg=%f",sum,avg);
}	
