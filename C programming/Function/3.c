//3.without return type with argument
#include<stdio.h>
void multi(int num1,int num2);
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);//3
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);//4
	multi(num1,num2);
	return 0;
}
void multi(int num1,int num2)
{
	int ans;
	ans = num1*num2;
	printf("\nThe multiplication is = %d",ans);
}
