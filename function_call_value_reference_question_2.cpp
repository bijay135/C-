/*
WAP to illustrate function call by value and function call by reference.
*/
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;
void add(int a,int b);
void swap(int &x, int &y);

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;

   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   swap(a, b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;

   add(a,b);

   return 0;
}
void swap(int &x, int &y) {
   int temp;
   temp = x;
   x = y;
   y = temp;
}
void add(int a,int b){
    cout<<"Sum of "<<a<<" "<<b<<" is "<<a+b<<endl;
}
