/*
WAP to illustrate function call by value and function call by reference.
*/
#include<iostream>
using namespace std;

int main(){
    int x,*p,*q;
    p=new int[10];
    q=p;
    *p=4;
    for(int j=0;j<0;j++){
        x=*p;
        p++;
        *p=x+j;
    }
    for(int k=0;k<10;k++){
        cout<<*q<<" ";
        q++;
    }
    cout<<endl;
}
