/*Write a C program to find out given character is vowel or not.*/

#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("given character is vowel\n");
	else 
		printf("given character is not vowel\n");

}
