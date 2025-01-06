#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);//10
	printf("\nEnter the ending number = ");
	scanf("%d",&end);//5
	if(start<end)
	{
		for(i=start;i<=end;i++)
		{
			printf("\n%d",i);
		}
	}
	else
	{
		for(i=start;i>=end;i--)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
