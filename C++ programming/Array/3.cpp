//Write a c++ program to take index number as an input from the user and print the element present on that index number.
#include<iostream>
using namespace std;
int main()
{
    int size,a[100],i,index;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the elements in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nEnter the index number = ";
    cin>>index;

    if(index<size)
    {
        cout<<"\nElement present on index "<<index<<" is = "<<a[index];
    }
    else
    {
        cout<<"\nThis index has no element on it";
    }
    return 0;
}