#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("\nEnter the value of a = ");
	scanf("%d",&a);
	printf("\nEnter the value of b = ");
	scanf("%d",&b);
	c=a>b?a:b;
	printf("\nValue of c = %d",c);
	return 0;
}
