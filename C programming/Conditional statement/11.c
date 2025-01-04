#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any character = ");
	scanf(" %c",&ch);
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("\nThis is alphabet");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\nThis is a number");
	}
	else
	{
		printf("\nThis is a special character");
	}
	return 0;
}
