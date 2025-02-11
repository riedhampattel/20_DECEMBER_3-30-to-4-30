#include<iostream>
using namespace std;
class Demo
{
    private :
        int id;
        string name;
    public :
        Demo(int i,string n)//parameterized constructor
        {
            cout<<"\nParameterized constructor";
            id = i;
            name = n;
        }
        Demo()//default constructor
        {
           cout<<"\nDefault constructor called"; 
        }
        Demo(Demo &obj)
        {
            cout<<"\nCopy constructor called";
            id = obj.id;
            name = obj.name;
        }
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name<<endl;
        }
};
int main()
{
    Demo d1(101,"Rohan");//parameterized constructor
    Demo d2(102,"Rahul");//parameterized constructor
    Demo d3=d1;//copy constructor
    Demo d4(d2);//copy constructor
    Demo d5;

    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}