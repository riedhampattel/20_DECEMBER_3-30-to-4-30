#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any alphabet = ");
	scanf(" %c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("\n%c is a capital case",ch);
	}
	else
	{
		printf("\n%c is a lower case",ch);
	}
	return 0;
}
