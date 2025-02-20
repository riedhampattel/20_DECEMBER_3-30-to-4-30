#include<iostream>
using namespace std;
template <typename T,int size>
void sorting(T (&arr)[size])
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int a[5]={45,32,1,8,5};
    int i;
    cout<<"\nOriginal Array = ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    sorting(a);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
       cout<<a[i]<<" ";
    }

    
    char ch[5] = {'Z','R','D','M','A'};
    cout<<"\nOriginal Array = ";
    for(i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }
    sorting(ch);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
       cout<<ch[i]<<" ";
    }

    float f[5]={45.85,32.52,1.1,0.8,8.5};
    cout<<"\nOriginal Array = ";
    for(i=0;i<5;i++)
    {
        cout<<f[i]<<" ";
    }
    sorting(f);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
       cout<<f[i]<<" ";
    }
    return 0;
}