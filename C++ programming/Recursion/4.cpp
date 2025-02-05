#include<iostream>
using namespace std;
int sumarr(int a[],int size)
{
    if(size!=0)
    {
        return a[size-1]+sumarr(a,size-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[100],size,i;
    cout<<"Enter the size of the array: ";
    cin>>size;//5
    for(i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>a[i];
    }
    int ans = sumarr(a,size);
    cout<<"Sum of the elements of the array is: "<<ans<<endl;
    return 0;
}