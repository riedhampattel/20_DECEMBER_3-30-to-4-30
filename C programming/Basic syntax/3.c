#include<stdio.h>
int main()
{
	int a;
	float f;
	char ch;
	
	printf("\nEnter the value of a = ");
	scanf("%d",&a);
	printf("\nEnter the value of f = ");
	scanf("%f",&f);
	printf("\nEnter the value of ch = ");
	scanf(" %c",&ch);
	
	printf("The value of a = %d",a);
	printf("\nThe value of f = %.3f",f);
	printf("\nThe value of ch = %c",ch);
	return 0;
}
