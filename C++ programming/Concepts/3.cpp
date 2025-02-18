#include<iostream>
using namespace std;
class Demo
{
    private :
        string name;
        int age;
    public :
        void set(string name,int age)
        {
            this->name = name;
            this->age = age;
        }
        void display()
        {
            cout<<"\nName = "<<name;
            cout<<"\nAge = "<<age<<endl;
        }
};
int main()
{
    Demo d;
    d.set("Dhyan",18);
    d.display();
    return 0;
}