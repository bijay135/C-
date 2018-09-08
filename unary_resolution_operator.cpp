/*
Write a program to implement use of unary resolution operator
*/
#include<iostream>
using namespace std;
int n = 10;
int main(){
    int n = 30;
    int sum = 20;
    sum += n;
    cout<<"local variable "<<sum<<endl;
    sum = 20;
    sum += ::n;
    cout<<"global variable "<<sum<<endl;
}
