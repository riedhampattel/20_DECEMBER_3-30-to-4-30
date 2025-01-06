#include<stdio.h>
int main()
{
	int num,count=0,i;
	printf("\nEnter the num = ");
	scanf("%d",&num);//4
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}
