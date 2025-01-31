/*
Write a C++ program to read the roll no, name and marks of three subjects and calculate the total, percentage and grade.
(1% to 45% ---> 'C',45% to 80% ---> 'B', 80% to 100% ---> 'A')
*/
#include<iostream>
using namespace std;
int main()
{
	int roll,maths,english,science;
	string name;
	
	cout<<"\nEnter your roll no. = ";
	cin>>roll;
	cout<<"\nEnter your name = ";
	cin>>name;
	cout<<"\nEnter the marks of maths = ";
	cin>>maths;
	cout<<"\nEnter the marks of english = ";
	cin>>english;
	cout<<"\nEnter the marks of science = ";
	cin>>science;
	
	int total = maths + english + science;
	double percentage = (float)total/3.0;
	
	cout<<"\nRoll no. = "<<roll;
	cout<<"\nName = "<<name;
	cout<<"\nMaths = "<<maths;
	cout<<"\nEnglish = "<<english;
	cout<<"\nScience = "<<science;
	cout<<"\nTotal marks = "<<total;
	cout<<"\nPercentage = "<<percentage;
	
	if(percentage>=1 && percentage <45)
	{
		cout<<"\nGrade = C";
	}
	else if(percentage>=45 && percentage<80)
	{
		cout<<"\nGrade = B";
	}
	else
	{
		cout<<"\nGrade = A";
	}
	return 0;
}