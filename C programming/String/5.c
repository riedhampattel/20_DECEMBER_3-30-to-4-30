#include<stdio.h>
int main()
{
	char a[100] = "Tops Technologies";
	int i;	
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
