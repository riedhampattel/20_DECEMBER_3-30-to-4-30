#include<stdio.h>
int main()
{
	int size,a[100],i,j,choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n1.Ascending order");
	printf("\n2.Descending order");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nAscending ordered array = ");
			for(i=0;i<size;i++)
			{
				printf("%d ",a[i]);
			}
		break;
		case 2:
			printf("\nDescending ordered array = ");
			for(i=size-1;i>=0;i--)
			{
				printf("%d ",a[i]);
			}
	}
	return 0;
}
