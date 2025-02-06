#include<iostream>
using namespace std;
class Demo
{
    public :
        int id;
        string name;
        void display()
        {
            cout<<"\nHello Wold!";
        }
};
int main()
{
    Demo d;
    d.id = 101;
    d.name = "Rohan";
    cout<<"\nId = "<<d.id;
    cout<<"\nName = "<<d.name;

    Demo q,w;
    q.id = 102;
    q.name = "Dhyana";
    w.id = 103;
    w.name = "Richa";

    cout<<"\nId = "<<q.id;
    cout<<"\nName = "<<q.name<<endl;
    cout<<"\nId = "<<w.id;
    cout<<"\nName = "<<w.name;

    d.display();
    q.display();    
    w.display();
    return 0;
}