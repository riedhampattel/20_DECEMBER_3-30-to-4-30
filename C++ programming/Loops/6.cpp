/*
Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111 = 12345
The sum of the series is: 12345
*/
#include<iostream>
using namespace std;
int main()
{
    long int term,i,num=1,sum=0;
    cout<<"Enter the terms = ";
    cin>>term;//3
    for(i=1;i<=term;i++)//1
    {
        sum = sum + num;
        cout<<num;
        if(i<term)
        {
            cout<<" + ";
        }
        num = (num*10) + 1;
    }
    cout<<" = "<<sum;
    return 0;
}