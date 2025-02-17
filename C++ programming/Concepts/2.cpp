#include<iostream>
using namespace std;
class Demo
{
    private :
        int x = 10;
        string s = "Private";
    public :
       friend void display(Demo &obj);
};
void display(Demo &obj)
{
    cout<<"\nThe value of x = "<<obj.x;
    cout<<"\nThe value of s = "<<obj.s;
}
int main()
{
    Demo d;
    display(d);
    return 0;
}