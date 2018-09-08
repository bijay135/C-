/*
Write a program to check factorial of a number
*/
#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}
int factorial(int n)
{
    if(n < 2)
        return 1;
    else
        return n * factorial(n - 1);
}
