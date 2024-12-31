#include<stdio.h>
#define d 50
int main()
{
	int a=10;
	const int b=20,c=30;
	float f=98.5655;
	char ch='AIIMS';
	
	a = 20;
	a = 30;
	
	printf("The value of a = %d",a);
	printf("\nThe value of d = %d",d);
	printf("\nThe value of f = %.3f",f);
	printf("\nThe value of ch = %c",ch);
	return 0;
}
