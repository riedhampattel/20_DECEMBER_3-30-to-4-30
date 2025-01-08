#include<stdio.h>
int main()
{
	int num,sum=0,fact=1,rem,i,j;
	printf("\nEnter the number = ");
	scanf("%d",&num);//23
	int temp = num;
	for(j=num;num!=0;num = num/10)
	{
		rem = num%10;
		fact=1;
		for(i=1;i<=rem;i++)
		{
			fact = fact*i;
		}
		sum = sum + fact;
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
