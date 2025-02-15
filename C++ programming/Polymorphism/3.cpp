#include<iostream>
using namespace std;
class Demo
{
    private :
        int n1;
        int n2;
    public :
        Demo(int x,int y)
        {
            n1=x;
            n2=y;
        }
        Demo()
        {
            n1=0;
            n2=0; 
        }
        Demo operator&&(Demo &obj)
        {
            Demo temp;
            temp.n1 = n1 + obj.n1;
            temp.n2 = n2 + obj.n2;
            return temp;
        }
        void display()
        {
            cout<<"\nValue of n1 = "<<n1;
            cout<<"\nValue of n2 = "<<n2<<endl;
        }
};
int main()
{
    int x = 10;
    int y = 20;
    int z = x + y;

    Demo d1(10,20);
    Demo d2(30,40);
    Demo d3;

    d3 = d1 && d2;

    d1.display();
    d2.display();
    d3.display();
    return 0;
}