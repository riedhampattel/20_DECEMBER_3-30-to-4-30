#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("Enter the size of an array = ");
	scanf("%d",&size);//5
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
