#include<stdio.h>
struct Student
{
	int id;
	float per;
	char grade;
};
int main()
{
	struct Student s[50];
	int count,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("\nEnter the id = ");
		scanf("%d",&s[i].id);
		printf("\nEnter the Percentage = ");
		scanf("%f",&s[i].per);
		printf("\nEnter the grade = ");
		scanf(" %c",&s[i].grade);
	}
	for(i=0;i<count;i++)
	{
		printf("\nid = %d",s[i].id);
		printf("\nPercentage = %.2f",s[i].per);
		printf("\ngrade = %c",s[i].grade);
	}
	return 0;
}
