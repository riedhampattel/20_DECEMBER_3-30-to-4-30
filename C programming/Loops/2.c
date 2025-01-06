#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);//5
	for(i=1;i<=num;i++)
	{
		sum = sum + i;
	}
	printf("\nThe addition of %d numbers is = %d",num,sum);
	printf("\nThe average is = %.2f",(float)sum/(float)num);
	return 0;
}
