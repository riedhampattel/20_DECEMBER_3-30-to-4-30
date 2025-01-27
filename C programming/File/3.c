#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("first.txt","r");
	char str[100];
	while(fgets(str,100,fp1))
	{
		printf("%s",str);
	}
	return 0;
}
