/*Que No 8 to 10 are pattern program make use of nested for loop*/

#include<stdio.h>
void main()
{
	int n,i,j,d;
	printf("Enter the number\n");
	scanf("%d",&n);
	d=n;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=d;k++)
		printf(" ");
		d--;
		for(j=0;j<i;j++)
 		printf("%d",i);
		printf("\n");

	}
}


