//Write a c++ program to delete an element from an array, take index number from the user.  
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
    cout<<"\nEnter the index number = ";
    cin>>index;//2

    for(i=index;i<size-1;i++)
    {
        a[i] = a[i+1];
    }
    cout<<"\nArray after deletion = ";
    for(i=0;i<size-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}