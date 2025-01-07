#include<stdio.h>
int main()
{
	int num,cnt=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);//45
	while(num!=0)
	{
		num = num/10;
		cnt++;//3
	}	
	printf("\nDigit = %d",cnt);
	return 0;
}
