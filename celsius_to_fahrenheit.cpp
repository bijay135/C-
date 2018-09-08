/*
Write a program to ask temperature in fahrenheit from and display it in celsius
*/
#include<iostream>
using namespace std;
int main(){
    int c,f;
    cout<<"Enter the temperature in fahrenheit"<<endl;
    cin>>f;
    c=(100*(f-32)/180);
        cout<<"The temperature in celsius is "<<c<<endl;
}

