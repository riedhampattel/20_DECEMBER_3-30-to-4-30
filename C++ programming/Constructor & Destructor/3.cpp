#include<iostream>
using namespace std;
class Factorial
{
    public :
        Factorial(int i)
        {
            int j,fact = 1;
            for(j=1;j<=i;j++)
            {
                fact = fact * j;
            }
            cout<<"\nFactorial of "<<i<<" is = "<<fact;
        }
};
int main()
{   
    Factorial f1(5);
    Factorial f2(4);
    Factorial f3(6);
    return 0;
}