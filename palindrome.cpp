/*
Write a program to check palindrome
*/
#include<iostream>
using namespace std;
int main(){
    int v,n,d,r=0;
    cout<<"Enter value to check palindrome"<<endl;
    cin>>v;
    n=v;
    while(v>0){
        d=v%10;
        r=(r*10)+d;
        v=v/10;
    }
    cout<<r<<endl;
    if(n==r)
        cout<<"The value is palindrome"<<endl;
    else
        cout<<"The value is not a palindrome"<<endl;
}
