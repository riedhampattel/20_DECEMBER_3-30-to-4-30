#include<stdio.h>
int main()
{
	int num,cnt=0,rem,i,power,sum=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);//22
	int temp = num;
	int copy = num;
	while(num!=0)
	{
		num = num/10;
		cnt++;//2
	}
	for(i=1;i<=cnt;i++)
	{
		rem = temp%10;
		power = pow(rem,cnt);
		sum = sum + power;
		temp = temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}
