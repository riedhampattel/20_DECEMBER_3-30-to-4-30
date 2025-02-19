#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("first.txt");
    MyFile<<"This is first attempt";
    MyFile<<"\nThis is second attempt";
    MyFile<<"\nThis is third attempt";
    MyFile<<"\nThis is fourth attempt";
    MyFile<<"\nThis is fifth attempt";
    MyFile.close();
    return 0;
}