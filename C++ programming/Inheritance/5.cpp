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
class Uncle : public GrandParent
{
    public :
        void display2()
        {
            cout<<"\nHello from Uncle class";
        }
};
class Parent : public GrandParent
{
    public :
        void display3()
        {
            cout<<"\nHello from Parent class";
        }
};
class Cousin : public Uncle
{

};
class Child : public Parent
{

};
int main()
{
    Cousin c;
    c.display1();
    c.display2();
    Child ch;
    ch.display1();
    ch.display3();
    return 0;
}