#include<iostream>
using namespace std;
//compile time polymorphism
//function overloading
class Shape
{
    public :
        void shape(int side)
        {
            cout<<"\nThe area of square is = "<<side*side;
        }
        void shape(double radius)
        {
            cout<<"\nThe area of circle is = "<<3.14*(radius*radius);
        }
        void shape(int l,int b)
        {
            cout<<"\nThe area of rectangle is = "<<l*b;
        }
        void shape(int b,double h)
        {
            cout<<"\nThe area of triangle is = "<<0.5*(b*h);
        }
        void shape(double b,int h)
        {
            cout<<"\nThe area of triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s1;
    s1.shape(5);
    s1.shape(4,5);
    s1.shape(4.5);
    s1.shape(4,2.3);
    s1.shape(2.3,4);
    return 0;
}