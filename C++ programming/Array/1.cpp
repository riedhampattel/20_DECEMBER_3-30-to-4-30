//Write a c++ program to take an array from the user and copy that in another array
#include<iostream>
using namespace std;
int main()
{
    int size,a[100],i,copy[100];
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
        copy[i] = a[i];
    }
    cout<<"\nOriginal array = ";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nCopied array = ";
    for(i=0;i<size;i++)
    {
        cout<<copy[i]<<" ";
    }
    return 0;
}