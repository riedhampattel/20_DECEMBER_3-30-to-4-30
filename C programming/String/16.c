#include<stdio.h>
void copy(char s1[],char s2[])
{
	int i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
}
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value of str1 = ");
	gets(str1);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	copy(str2,str1);
	
	printf("\nCopied string = %s",str2);
	return 0;
}
