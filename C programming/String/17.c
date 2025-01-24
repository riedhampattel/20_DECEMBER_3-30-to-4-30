#include<stdio.h>

int compare(char str1[],char str2[])
{
	int count=0,i;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			count++;//5
		}
	}
	return count;
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
	
	int result = compare(str1,str2);
	
	if(result==0)
	{
		printf("\nBoth the strings are same");
	}
	else
	{
		printf("\nBoth the strings are different");
	}
	return 0;
}
