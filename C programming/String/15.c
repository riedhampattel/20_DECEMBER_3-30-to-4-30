#include<stdio.h>
void copy(char str[])
{
	int i;
	char cpy[100];
	for(i=0;str[i]!='\0';i++)
	{
		cpy[i]=str[i];
	}
	cpy[i]='\0';
	printf("\nCopied string = %s",cpy);
}
int main()
{
	char str[100];
	printf("\nEnter the value of str = ");
	gets(str);
	
	printf("\nOriginal value of str = %s",str);
	
	copy(str);
	return 0;
}
