/*
Write a c++ program to dislay this pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;
    cout<<"Enter the odd number here = ";
    cin>>row;

    int cnt1 = (row/2) + 1;
    int spc = cnt1 - 1;
    for(i=1;i<=cnt1;i++)
    {
        for(j=1;j<=spc;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        spc--;
    }
    int cnt2 = row - cnt1;
    int star = cnt2;
    for(i=1;i<=cnt2;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=star;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        star--;
    }
    return 0;
}