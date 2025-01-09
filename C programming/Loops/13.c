/*
Write a c program to take row and column number from the user and print the following pattern.

* * * *
* * * *
* * * *
* * * *
*/
#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);
	printf("\nEnter the col count = ");
	scanf("%d",&col);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
