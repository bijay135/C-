/*
Write a program to check armstrong
*/
#include<iostream>
using namespace std;
int main(){
    int n,z,a=0,temp;
    cout<<"Enter value to check armstrong"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        z=n%10;
        a=(z*z*z)+a;
        n=n/10;
    }
    if(temp==a)
        cout<<"The value is armstrong";
    else
         cout<<"The value is not an armstrong";
}

