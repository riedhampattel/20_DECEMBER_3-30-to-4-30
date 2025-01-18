#include<stdio.h>
int main()
{
	int a[100][100],row,col,i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//2
	printf("\nEnter the col count = ");
	scanf("%d",&col);//3
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
