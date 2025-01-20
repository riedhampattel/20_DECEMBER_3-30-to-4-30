//4.without return type without argument
#include<stdio.h>
void sub();
int main()
{
	sub();
	return 0;
}
void sub()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	int ans = num1-num2;
	printf("\nThe subtraction is = %d",ans);
}
