#include<iostream>
using namespace std;
template<typename T>
void swapping(T &n1,T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout<<"\nOriginal Value of a = "<<a;
    cout<<"\nOriginal Value of b = "<<b;
    swapping(a,b);
    cout<<"\nValue of a after swapping = "<<a;
    cout<<"\nValue of b after swapping = "<<b;

    char x = 'A';
    char y = 'B';
    cout<<"\nOriginal Value of x = "<<x;
    cout<<"\nOriginal Value of y = "<<y;
    swapping(x,y);
    cout<<"\nValue of x after swapping = "<<x;
    cout<<"\nValue of y after swapping = "<<y;

    string str1 = "Hello";
    string str2 = "Bye";
    cout<<"\nOriginal Value of str1 = "<<str1;
    cout<<"\nOriginal Value of str2 = "<<str2;
    swapping(str1,str2);
    cout<<"\nValue of str1 after swapping = "<<str1;
    cout<<"\nValue of str2 after swapping = "<<str2;
    return 0;
}