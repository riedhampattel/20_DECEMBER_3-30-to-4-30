#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter the value of a = ");
	scanf("%d",&a);
	printf("\nEnter the value of b = ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n%d is the biggest number",a);
	}
	else
	{
		printf("\n%d is the biggest number",b);
	}
	return 0;
}
