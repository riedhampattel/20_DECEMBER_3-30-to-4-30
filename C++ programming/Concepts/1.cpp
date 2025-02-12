#include<iostream>
using namespace std;
class Pattern
{
    public :
        Pattern(int n1,int n2)
        {
            int i,j,temp;
            int copy = n1+1;
            int col = (n2-n1)/10;
            for(i=1;i<=10;i++)
            {
                temp = copy;
                for(j=1;j<=col;j++)
                {
                    if(j!=1)
                    {
                        temp = temp + 10;
                    }
                   cout<<temp<<" "; 
                }
                cout<<endl;
                copy++;
            }
        }
};
int main()
{
    int n1,n2,i,j;
    cout<<"\nEnter the value in n1 = ";
    cin>>n1;
    cout<<"\nEnter the value in n2 = ";
    cin>>n2;
    Pattern p1(n1,n2);
    return 0;
}