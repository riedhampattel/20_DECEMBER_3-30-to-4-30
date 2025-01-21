#include<stdio.h>
int left(int arr[],int size)
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
int right(int arr[],int size)
{
	int j=size-1,sum = 0,i;
	for(i=0;i(2)<size(3);i++)
	{
		sum = sum + arr[i][j];
		j--;
	}
	return sum;
}
int main()
{
	int size,a[10][10];
	printf("\nEnter the size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d]= ");
			scanf("%d",&a[i][j]);
		}
	}
	int result = left(a,size);
	printf("\nResult of left diagonal elements = %d",result);
	result = right(a,size);
	printf("\nResult of right diagonal elements = %d",result);
	return 0;
}
