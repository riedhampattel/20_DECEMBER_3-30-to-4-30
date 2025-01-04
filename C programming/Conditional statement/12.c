#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any character = ");
	scanf(" %c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("\nThis is alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\nThis is a number");
	}
	else
	{
		printf("\nThis is a special character");
	}
	return 0;
}
