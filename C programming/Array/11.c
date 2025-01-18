#include<stdio.h>
int main()
{
	int size,a[10][10],b[10][10],ans[10][10],i,j;
	char choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
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
	printf("\nPress '+' for addition");
	printf("\nPress '-' for subtraction");
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	switch(choice)
	{
		case '+':
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nArray after addition \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case '-':
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nArray after subtraction \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
	}
	return 0;
}
