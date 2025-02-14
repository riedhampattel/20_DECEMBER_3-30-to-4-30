#include<iostream>
using namespace std;
class Father
{
    public :
        void display1()
        {
            cout<<"\nHello from Father class";
        }
};
class Mother
{
    public :
        void display2()
        {
            cout<<"\nHello from mother class";
        }
};
class Child : public Father,public Mother
{

};
int main()
{
    Child c;
    c.display1();
    c.display2();
    return 0;
}