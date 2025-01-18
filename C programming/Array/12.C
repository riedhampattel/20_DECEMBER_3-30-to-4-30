#include<stdio.h>
int main()
{
	int size,a[10][10],b[10][10],ans[10][10],i,j,k;
	char choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);//2
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<size;i++) //row
	{
		for(j=0;j<size;j++) //col
		{
			ans[i][j] = 0;
			for(k=0;k<size;k++) //col
			{
				ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
			}
		}
	}
	return 0;
}
