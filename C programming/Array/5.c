#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nReversed array = ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
