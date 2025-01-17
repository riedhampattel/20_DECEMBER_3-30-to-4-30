#include<stdio.h>
int main()
{
	int a[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);//5
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nUnique elements = ");
	for(i=0;i<size;i++)
	{
		int count = 0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					count++;
					break;
				}
			}	
		}
		if(count==0)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
