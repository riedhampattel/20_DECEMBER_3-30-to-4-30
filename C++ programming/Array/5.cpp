//Write a c++ program to insert an element in unsorted array, take index number and element from the user. 
#include<iostream>
using namespace std;
int main()
{
    int a[100],size,i,element,index;
    cout<<"\nEnter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nEnter the element = ";
    cin>>element;//8
    cout<<"\nEnter the index number = ";
    cin>>index;//2
    for(i=size-1;i>=index;i--)
    {
        a[i+1] = a[i];
    }
    a[index] = element;
    cout<<"\nArray after insertion = ";
    for(i=0;i<=size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}