#include<stdio.h>
int length(char str[])
{
	int count=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char str[100];
	printf("\nEnter the value of str = ");
	gets(str);
	
	printf("\nOriginal value of str = %s",str);
	
	int len = length(str);
	
	printf("\nLength of str = %d",len);
	return 0;
}
