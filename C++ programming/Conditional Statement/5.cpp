//Write a C++ program to check whether a triangle can be formed with the given values for the angles.(additon of all angles should be 180 deg)
#include<iostream>
using namespace std;
int main()
{
	int ang1,ang2,ang3;
	cout<<"\nEnter the value of ang1 = ";
	cin>>ang1;
	cout<<"\nEnter the value of ang2 = ";
	cin>>ang2;
	cout<<"\nEnter the value of ang3 = ";
	cin>>ang3;
	
	cout<<"\nThe addition of all the angles is = "<<ang1+ang2+ang3;
	
	if(ang1+ang2+ang3==180)
	{
		cout<<"\nTriangle is possible with given values";
	}
	else
	{
		cout<<"\nTriangle is not possible with given values";
	}
	return 0;
}