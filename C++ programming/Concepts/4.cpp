#include<iostream>
using namespace std;
class Shape//abstract class
{
    public :
        virtual void draw()
        {
            cout<<"\nThis is drawing";
        }
};
class Circle : public Shape
{
    public :
        void draw()
        {
            cout<<"\nThis is Circle";
        }
};
class Square : public Shape
{
    public :
        void draw()
        {
            cout<<"\nThis is Square";
        }
};
int main()
{
    Shape *s;
    Circle c;
    Square sq;

    s = &c;
    s->draw();
    s = &sq;
    s->draw();
    return 0;
}