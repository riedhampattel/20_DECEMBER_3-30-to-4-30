#include<stdio.h>
int main()
{
	int num,sum=0,fact=1,rem,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int temp = num;
	while(num!=0)
	{
		rem = num%10;
		fact=1;
		for(i=1;i<=rem;i++)
		{
			fact = fact*i;
		}
		sum = sum + fact;
		num = num/10;
	}
	if(sum==temp)
	{
		printf("\n%d is a strong number",temp);
	}
	else
	{
		printf("\n%d is not a strong number",temp);
	}
	return 0;
}
