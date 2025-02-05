#include<iostream>
using namespace std;
void display(int n)
{
    if(n!=0)
    {
        cout<<"Hello World"<<endl;
        cout<<"Bye"<<endl;
        display(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;//3
    display(n);
    return 0;
}