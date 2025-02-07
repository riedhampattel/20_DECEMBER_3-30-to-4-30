#include<iostream>
using namespace std;
class Student
{
    private :
        int id;
        string name;
        double cgpa;
    public :
        void set(int i,string n,double c)
        {
            id = i;
            name = n;
            cgpa = c;
        }
        void get()
        {
            cout<<"ID : "<<id<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"CGPA : "<<cgpa<<endl;
        }
};
int main()
{
    Student s1;
    s1.set(1,"Rahul",9.5);
    Student s2;
    s2.set(2,"Rohit",9.0);
    Student s3;

    s1.get();
    s2.get();
    s3.get();
    return 0;
}