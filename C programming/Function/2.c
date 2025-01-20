//2.with return type without argument
#include<stdio.h>
float div();
int main()
{
	float result = div();
	printf("\nThe division is = %.2f",result);
	return 0;
}
float div()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);//5
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);//2
	return (float)num1/(float)num2;
}
