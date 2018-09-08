/*
Write a C++ program to print the following pattern:
    A
    AB
    ABC
    ABCD
    ABCDE
*/
#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    for(int i=1; i<=5 ; i++)
    {
        ch = 'A';
        for(int j=1; j<=i; j++)
        {
            cout<< ch<< " ";
            ch++;
        }
    cout<< "\n";
    }
    return 0;
}
