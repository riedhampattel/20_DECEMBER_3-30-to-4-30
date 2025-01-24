#include<stdio.h>

void concat(char s1[],char s2[])
{
	int i,len=0;
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		s1[len] = s2[i];
		len++;
	}
	s1[len] = '\0';
}

int main()
{
	char str1[100],str2[50];
	printf("\nEnter the value of str1 = ");
	fgets(str1,50,stdin);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	concat(str1,str2);
	
	printf("\nConcated string = %s",str1);
	return 0;
}
