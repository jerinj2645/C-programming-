/*Que No 8 to 10 are pattern program make use of nested for loop*/

#include <stdio.h>
void main()
{
      int i, c, n, b,j;
      printf("Enter the number of rows \n");
      scanf("%d", &n);
      b=n;
      for(i=1;i<=n;i++) 
      {
      	for(c=1;c<b; c++)  
        printf(" ");
        b--;
     	for(j=1;j<=2*i-1;j++) 
        printf("%d",i);
       	printf("\n");
      }
}
