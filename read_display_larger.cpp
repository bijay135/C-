/*
Write a program to display largest number between two numbers asked from user
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"Largest number is "<<a<<endl;
    }
    else{
        cout<<"Largest number is "<<b<<endl;
    }
}

