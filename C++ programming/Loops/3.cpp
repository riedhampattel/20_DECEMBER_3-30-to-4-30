/*
Write a program in C++ to find the last prime number that occurs before the entered number.
input := 50
output := 47
*/
#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"Enter the number = ";
    cin>>num;//10
    
    for(i=num-1;i>=1;i--)
    {
        int num = i;
        int count = 0;
        for(j=2;j<=num/2;j++)
        {
            if(num%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<"\nPrevious prime number = "<<num;
            break;
        }
    }
    return 0;
}