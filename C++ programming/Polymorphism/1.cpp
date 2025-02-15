#include<iostream>
using namespace std;
//compile time polymorphism
//constructor overloading
class Shape
{
    public :
        Shape(int side)
        {
            cout<<"\nThe area of square is = "<<side*side;
        }
        Shape(double radius)
        {
            cout<<"\nThe area of circle is = "<<3.14*(radius*radius);
        }
        Shape(int l,int b)
        {
            cout<<"\nThe area of rectangle is = "<<l*b;
        }
        Shape(int b,double h)
        {
            cout<<"\nThe area of triangle is = "<<0.5*(b*h);
        }
        Shape(double b,int h)
        {
            cout<<"\nThe area of triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s1(10);
    Shape s2(4.5);
    Shape s3(4,5);
    Shape s4(5,6.5);
    Shape s5(6.5,5);
    return 0;
}