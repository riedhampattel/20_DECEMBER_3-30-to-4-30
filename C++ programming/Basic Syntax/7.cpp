//Write a c++ program to swap values of 2 variables without using third variable(use * and / operators).
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b;
	
	a = a * b;
	b = a / b;
	a = a / b;
	
	cout<<"\nValue of a after swapping = "<<a;
	cout<<"\nValue of b after swapping = "<<b;
	
	return 0;
}