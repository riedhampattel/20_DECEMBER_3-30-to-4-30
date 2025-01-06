#include<stdio.h>
int main()
{
	int count,n,sum=0,avg,i;
	printf("\nEnter the count of numbers = ");
	scanf("%d",&count);//3
	for(i=1;i<=count;i++)
	{
		printf("\nEnter the number = ");
		scanf("%d",&n);//2
		sum = sum + n;
	}
	printf("\nThe addition of %d numbers is = %d",count,sum);
	printf("\nThe average is = %.2f",(float)sum/(float)count);
	return 0;
}
