#include<stdio.h>
int main()
{
	int a[100],i,size,sum=0;
	float avg;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe addition is = %d",sum);
	printf("\nThe average is = %.2f",(float)sum/(float)size);
	return 0;
}
