#include<iostream>
using namespace std;
class Detail
{
    private :
        int id;
        string name;
    public :
        Detail(int i,string n)
        {   
            id = i;
            name = n;
        }
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name<<endl;
        }
};
int main()
{
    Detail d1(101,"Rohan");
    d1.display();
    return 0;
}