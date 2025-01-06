#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);//5
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\n%d is a factorial of %d",fact,num);
	return 0;
}
