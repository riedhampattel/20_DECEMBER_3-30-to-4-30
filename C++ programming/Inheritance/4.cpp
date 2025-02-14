#include<iostream>
using namespace std;
class Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Parent class";
        }
};
class Son : public Parent
{

};
class Daughter : public Parent
{

};

int main()
{
    Parent p;
    p.display();
    Son s;
    s.display();
    Daughter d;
    d.display();
    return 0;
}