#include<stdio.h>
int main()
{
	int num1=0,num2=1,num3,term,i;
	printf("\nEnter the terms = ");
	scanf("%d",&term);//5
	printf("\nFibonnaci series = %d %d ",num1,num2);
	for(i=1;i<=term-2;i++)
	{
		num3 = num1 + num2;
		printf("%d ",num3);
		num1 = num2;
		num2 = num3;	
	}
	return 0;
}
