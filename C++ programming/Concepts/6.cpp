#include<iostream>
using namespace std;
class Student
{
    public :
        int id,maths,english;
        string name;
        Student(int id,string name,int maths,int english)
        {
            this->id = id;
            this->name = name;
            this->maths = maths;
            this->english = english;
        }
};
class Address
{
    private :
        string city;
        Student *ref;
    public :
        Address(string city,Student *ref)
        {
            this->city = city;
            this->ref = ref;
        }
        void display()
        {
            cout<<"\nId = "<<ref->id;
            cout<<"\nName = "<<ref->name;
            cout<<"\nTotal marks = "<<ref->english+ref->maths;
            cout<<"\nCity = "<<city;
        }
};
int main()
{
    Student s1(101,"Rohan",76,85);
    Address a("Rajkot",&s1);
    a.display();
    return 0;
}