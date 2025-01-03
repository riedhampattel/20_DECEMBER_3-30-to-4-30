#include<stdio.h>
//using arithmetic operators(*,/)
int main()
{
	int a=10;
	int b=20;
	
	printf("\nThe value of a before swapping = %d",a);//10
	printf("\nThe value of b before swapping = %d",b);//20
	
	a = a * b;
	b = a / b;
	a = a / b;
	
	printf("\nThe value of a after swapping = %d",a);//20
	printf("\nThe value of b after swapping = %d",b);//10
	return 0;
}
