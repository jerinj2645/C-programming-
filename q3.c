/*Write a C program to find out biggest of three input numbers.*/

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("%d is the greatest number",a);
	if(b>a&&b>c)
        	printf("%d is the greatest number",b);
	if(c>a&&c>b)
        	printf("%d is the greatest number",c);

}
