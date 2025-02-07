//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
    private :
        double radius;
    public :
        void set(double r)
        {
            radius = r;
        }
        double area()
        {
            return 3.14*(radius*radius);
        }
        double circumference()
        {
            return 2*(3.14*radius);
        }
};
int main()
{
    double n;
    Circle c1;
    cout<<"Enter the radius = ";
    cin>>n;
    c1.set(n);
    double ans = c1.area();
    cout<<"\nArea of the circle = "<<ans;
    ans = c1.circumference();
    cout<<"\nCircumference of the circle = "<<ans;
    return 0;
}