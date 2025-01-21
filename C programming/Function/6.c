#include<stdio.h>

void inverse(int arr[10][10],int row,int col)
{
	int b[10][10],i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			b[j][i] = arr[i][j];
		}
	}
	printf("\nInversed array = \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int row,col,a[10][10],i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//3
	printf("\nEnter the col count = ");
	scanf("%d",&col);//2
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal Array = \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	inverse(a,row,col);
	return 0;
}
