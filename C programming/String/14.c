#include<stdio.h>

void reverse(char str[])
{
	int len=0,j=0,i;
	char rev[100];
	for(i=0;str[i]!='\0';i++)
	{
		len++;//5
	}
	for(i=len-1;i>=0;i--)
	{
		rev[j] = str[i];
		j++;
	}
	rev[j]='\0';
	printf("\nReversed string = %s",rev);
}

int main()
{
	char str[100];
	printf("\nEnter the value of str = ");
	gets(str);
	
	printf("\nOriginal value of str = %s",str);
	
	reverse(str);
	return 0;
}
