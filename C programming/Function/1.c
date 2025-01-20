//1.with return type with argument
#include<stdio.h>
int add(int num1,int num2);//declaration
int main()
{
	int n1,n2;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);//2
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);//3
	int result = add(n1,n2);//calling of the function
	printf("The addition is = %d",result);
	return 0;
}
int add(int num1,int num2)
{
	int ans;
	ans = num1 + num2;
	return ans;
}
