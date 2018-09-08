/*
Write a program to implement use of pointers
*/
#include<iostream>
using namespace std;
int main(){
    int a,*ptr1,*ptr2;
    a=50;
    ptr1=&a;
    ptr2=ptr1;
    cout<<*ptr1<<endl<<ptr1<<endl<<&ptr2<<endl;
}
