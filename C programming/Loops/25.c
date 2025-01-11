#include<stdio.h>
int main()
{
	int i;
	printf("\nEnter the number = ");
	scanf("%d",&i);//4
	start :
	if(i==0)
	{
		goto end;
	}
	i--;//0
	printf("\nTops Technologies");
	goto start;
	end :
	return 0;
}
