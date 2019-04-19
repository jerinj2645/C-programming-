/*Write a C program for reversing 3 digits no.*/

#include<stdio.h>
int main()
{
	int num,rem[3],rev;
	printf("Enter 3 digit no:");
	scanf("%d",&num);
	
	for(int i= 0; i<3;i++)
	{
		rem[i]=num%10;
		num=num/10;
        }

	rev = rem[0]*100+rem[1]*10+rem[2];
	printf("Reverse no: %d",rev);
	return 0;
}
