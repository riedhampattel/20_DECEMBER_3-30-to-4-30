#include<iostream>
using namespace std;
class GrandParent
{
    public :
        void display1()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Father :virtual public GrandParent
{
    public :
        void display2()
        {
            cout<<"\nHello from Father class";
        }
};
class Mother :virtual public GrandParent
{
    public :
        void display3()
        {
            cout<<"\nHello from Mother class";
        }
};
class Child : public Father,public Mother
{

};
int main()
{
    Child c;
    c.display2();
    c.display3();
    c.display1();
    return 0;
}