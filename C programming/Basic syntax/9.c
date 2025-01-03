#include<stdio.h>
//using third variable
int main()
{
	int a=10;
	int b=20;
	int temp;
	printf("\nThe value of a before swapping = %d",a);//10
	printf("\nThe value of b before swapping = %d",b);//20
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nThe value of a after swapping = %d",a);//20
	printf("\nThe value of b after swapping = %d",b);//10
	return 0;
}
