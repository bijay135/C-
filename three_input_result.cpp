/*
Write a program to display the result of x on reading the values of a, b and c.
1. All positive
2. All Negative
3. Random
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c,x,s;
    cout<<"1. All positive inputs"<<endl<<"2. All negative inputs"<<endl<<"3. Random inputs"<<endl;
    cin>>s;
    switch(s){
        case 1:
            cout<<"Enter the three positive values"<<endl;
            cin>>a>>b>>c;
            x=a+b+c;
            cout<<"The result is "<<x<<endl;
        break;
        case 2:
            cout<<"Enter the three negative values"<<endl;
            cin>>a>>b>>c;
            x=a+b+c;
            cout<<"The result is "<<x<<endl;
        break;
        case 3:
            cout<<"Enter the three random values"<<endl;
            cin>>a>>b>>c;
            x=a+b+c;
            cout<<"The result is "<<x<<endl;
        break;
    }
}
