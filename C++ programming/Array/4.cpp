//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
    int size,a[100],i,element,index=-1;
    cout<<"Enter the size of an array = ";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nEnter the element which you want to search = ";
    cin>>element;

    for(i=0;i<size;i++)
    {
        if(element==a[i])
        {
            index = i;
        }
    }

    if(index==-1)
    {
        cout<<"\nElement is not present in an array";
    }
    else
    {
        cout<<"\n"<<element<<" is present on index number "<<index;
    }
    return 0;
}