#include<stdio.h>
void Upper(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i] = s[i] - 32;
		}
	}
}
void Lower(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i] = s[i] + 32;
		}
	}
}

int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	Upper(str1);
	Lower(str2);
	
	printf("\nStr1 in Upper case = %s",str1);
	printf("\nStr2 in Lower case = %s",str2);
	return 0;
}
