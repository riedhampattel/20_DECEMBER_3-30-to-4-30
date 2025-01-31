/*
Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
*/
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\nEnter the value of x cordinate = ";
	cin>>x;
	cout<<"\nEnter the value of y cordinate = ";
	cin>>y;
	
	if(x>0 && y>0)
	{
		cout<<"This cordinates lies in first quadrant";
	}
	else if(x<0 && y>0)
	{
		cout<<"This cordinates lies in second quadrant";
	}
	else if(x<0 && y<0)
	{
		cout<<"This cordinates lies in third quadrant";
	}
	else if(x>0 && y<0)
	{
		cout<<"This cordinates lies in fourth quadrant";
	}
	else
	{
		cout<<"This cordinates lies on origin point";
	}
	return 0;
}