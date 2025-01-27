#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("first.txt","a");
	fprintf(fp1,"\nThis is my third try");
	fclose(fp1);
	printf("\nOperation successful");
	return 0;
}
