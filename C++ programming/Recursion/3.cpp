#include<iostream>
using namespace std;
int sum(int num)
{
    if(num!=0)
    {
        return num+sum(num-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;//5
    int ans = sum(n);
    cout<<"Sum of first "<<n<<" natural numbers is: "<<ans<<endl;
    return 0;
}