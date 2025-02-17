#include<iostream>
using namespace std;
class Demo//base class
{
    private :
        int x = 10;
        string s1 = "Private";
    protected :
        int y = 20;
        string s2 = "Protected";
    public :
        int z = 30;
        string s3 = "Public";
};
class Exp : public Demo//derived class
{
    public :
        void display()
        {
            cout<<"\nThe value of y = "<<y;
            cout<<"\nThe value of s2 = "<<s2;
        }
};
int main()
{
    Demo d;
    //private ---> within the class
    // cout<<"\nThe value of x = "<<d.x;
    // cout<<"\nThe value of s1 = "<<d.s1;

    Exp e;
    //private ---> within the class
    // cout<<"\nThe value of x = "<<e.x;
    // cout<<"\nThe value of s1 = "<<e.s1;

    //procted ---> within the class or in derived class
    // cout<<"\nThe value of x = "<<d.y;
    // cout<<"\nThe value of s1 = "<<d.s2;

    //procted ---> within the class or in derived class
    // cout<<"\nThe value of y = "<<e.y;
    // cout<<"\nThe value of s2 = "<<e.s2;

    e.display();

    cout<<"\nThe value of z = "<<d.z;
    cout<<"\nThe value of s3 = "<<d.s3;

    cout<<"\nThe value of z = "<<e.z;
    cout<<"\nThe value of s3 = "<<e.s3;
    return 0;
}