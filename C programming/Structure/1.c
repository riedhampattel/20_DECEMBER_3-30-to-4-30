#include<stdio.h>
struct Student
{
	int id;
	float per;
	char grade;
};
int main()
{
	struct Student s1,s2,s3;
	s1.id=101;
	s1.per=98.65;
	s1.grade='A';
	
	printf("\nId = %d",s1.id);
	printf("\nPercentage = %.2f",s1.per);
	printf("\nGrade = %c",s1.grade);
	
	printf("\nEnter the value of id = ");
	scanf("%d",&s2.id);
	printf("\nEnter the value of percentage = ");
	scanf("%f",&s2.per);
	printf("\nEnter the value of grade = ");
	scanf(" %c",&s2.grade);
	
	printf("\nId = %d",s2.id);
	printf("\nPercentage = %.2f",s2.per);
	printf("\nGrade = %c",s2.grade);
	return 0;
}
