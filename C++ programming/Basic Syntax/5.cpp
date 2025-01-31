//Write a c++ program to swap values of 2 variables using third variable.
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int temp;
	
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<"\nValue of a after swapping = "<<a;
	cout<<"\nValue of b after swapping = "<<b;
	
	return 0;
}