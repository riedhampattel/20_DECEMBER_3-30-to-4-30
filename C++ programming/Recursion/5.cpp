#include<iostream>
using namespace std;
int power(int b,int e)
{
    if(e!=0)
    {
        return b*power(b,e-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int base,exponent;
    cout<<"Enter the base: ";
    cin>>base;//2
    cout<<"Enter the exponent: ";
    cin>>exponent;//3
    int ans = power(base,exponent);
    cout<<"\nPower = "<<ans;
    return 0;     
}