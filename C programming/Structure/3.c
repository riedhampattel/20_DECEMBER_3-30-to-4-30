#include<stdio.h>
union Demo
{
	int n1,n2;
	char ch;
};
struct Exp
{
	int n1,n2;
	char ch;
};
int main()
{
	union Demo d;
	d.n1=65;
	d.ch='D';
	struct Exp e;
	e.n1=65;
	
	printf("\nUnion - value of n1 = %d",d.n1);
	printf("\nUnion - value of n2 = %d",d.n2);
	printf("\nUnion - value of ch = %c",d.ch);
	
	printf("\nStructure - value of n1 = %d",e.n1);
	printf("\nStructure - value of n2 = %d",e.n2);
	printf("\nStructure - value of ch = %c",e.ch);
	return 0;
}
