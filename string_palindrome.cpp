/*
Write a program to check palindrome of string
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string v,r;;
    cout<<"Enter string to check palindrome"<<endl;
    cin>>v;
    r=v;
    reverse(r.begin(),r.end());
    if(v==r)
        cout<<"The value is palindrome"<<endl;
    else
        cout<<"The value is not a palindrome"<<endl;
}
