// Write a C++ program to find the Armstrong number for a given range of number.
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int start, end,j,i;
    cout << "Enter the starting value = ";
    cin >> start; // 5
    cout << "Enter the ending value = ";
    cin >> end; // 10
    
    for (j = start; j <= end; j++)
    {
        int num = j;
        int temp = j;
        int copy = j;
        int sum = 0;
        int digit = 0;
        while (num != 0)
        {
            num = num / 10;
            digit++;
        }
        for (i = 1; i <= digit; i++)
        {
            int rem = temp % 10;
            int power = pow(rem, digit);
            sum = sum + power;
            temp = temp / 10;
        }
        if (sum == copy)
        {
            cout<<copy<<" ";
        }
    }
    return 0;
}