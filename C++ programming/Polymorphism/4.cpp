#include<iostream>
using namespace std;
//run time polymorphism
//function overriding
class GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from Grand Parent class";
        }
};
class Parent : public GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Child class";
        }
};
class Sibling : public Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Sibling class";
        }
};
int main()
{
    Parent p1;
    p1.display();
    Child c1;
    c1.display();
    return 0;
}