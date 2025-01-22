#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5},i;
	int *ptr = &a;
	printf("\nAddress of array = %p",ptr);
	printf("\nAddress of a[0] = %p",&a[0]);
	printf("\nAddress of a[1] = %p",&a[1]);
	printf("\nAddress of a[2] = %p",&a[2]);
	printf("\nAddress of a[3] = %p",&a[3]);
	printf("\nAddress of a[4] = %p",&a[4]);
	
	printf("\nValues of array = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}
