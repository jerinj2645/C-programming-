/*Write a C program to calculate the factorial of given number*/

#include<stdio.h>
int fact(int);
int f;
void main()
{
	int n,f;
	printf("enter the number for factorial");
	scanf("%d",&n);
	f=fact(n);
	printf("f=%d",f);
}

int fact(int t)
{
	int ans;
	if(t==1)
	{
		return 1;

	}	
	else
	{	
		ans=t*fact(t-1);
		return ans;
	}
}
