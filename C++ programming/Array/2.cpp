//Write a c++ program to take 2 arrays from the user and merge them in third array
#include<iostream>
using namespace std;
int main()
{
    int size1,size2,a[100],b[100],merged[200],i,j;
    cout<<"Enter the size of a array = ";
    cin>>size1;
    for(i=0;i<size1;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"Enter the size of b array = ";
    cin>>size2;
    for(i=0;i<size2;i++)
    {
        cout<<"\nEnter the element in b["<<i<<"] = ";
        cin>>b[i];
    }

    for(i=0;i<size1;i++)
    {
        merged[i] = a[i];
    }
    for(j=0;j<size2;j++)
    {
        merged[size1] = b[j];
        size1++;
    }

    cout<<"\nArray a = ";
    for(i=0;i<size1-size2;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nArray b = ";
    for(i=0;i<size2;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\nArray merged = ";
    for(i=0;i<size1;i++)
    {
        cout<<merged[i]<<" ";
    }
    return 0;
}