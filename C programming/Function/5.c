#include<stdio.h>
int left(int arr[][10],int size)
{
	int i,j,sum=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i==j)
			{
				sum = sum + arr[i][j];
			}
		}
	}
	return sum;
}
int right(int arr[][10],int size)
{
	int j=size-1,sum = 0,i;
	for(i=0;i<size;i++)
	{
		sum = sum + arr[i][j];
		j--;
	}
	return sum;
}
int main()
{
	int a[10][10],i,j,size;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int result = left(a,size);
	printf("\nResult of left diagonal elements = %d",result);
	result = right(a,size);
	printf("\nResult of right diagonal elements = %d",result);
	return 0;
}
