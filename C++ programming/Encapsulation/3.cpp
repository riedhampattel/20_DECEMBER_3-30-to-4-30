//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
    private :
        double acno,balance;
    public :
        void set(double a,double b)
        {
            acno = a;
            balance = b;
        }
        void withdraw(double a)
        {
            if(a>0 && a<balance)
            {
                balance = balance - a;
            }
        }
        void deposit(double a)
        {
            if(a>0)
            {
                balance = balance + a;
            }
        }
        void get()
        {
            cout<<"\nAccount no : "<<acno;
            cout<<"\nBalance : "<<balance;
        }
};
int main()
{
    BankAccount b1;
    double bal,ac;
    cout<<"\nEnter the account no : ";
    cin>>ac;
    cout<<"\nEnter the balance : ";
    cin>>bal;
    b1.set(ac,bal);
    b1.deposit(7500);
    b1.withdraw(20000);

    b1.get();
    return 0;
}