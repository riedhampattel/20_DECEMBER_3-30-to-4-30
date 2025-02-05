#include<iostream>
using namespace std;
int fact(int num)
{
    if(num!=0)
    {
        return num*fact(num-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;//5
    int ans = fact(n);
    cout<<"Factorial of "<<n<<" is: "<<ans<<endl;
    return 0;
}