/*
   Write a C++ program to demonstrate how a common friend function can be used to exchange the private value of two classes.
   Use call by reference method.
*/
#include<iostream>
using namespace std;
class One{
    private:
        int a=1,b=2,c=3;
    public:
        friend void exchangeValues(One,Two );
};
class Two{
    private:
        int x=4,y=5,z=6;
    public:
        friend void exchangeValues(One,Two);
};
void exchangeValues(One m,Two n){
    int t;
    cout<<"The orginal values are: "<<endl;
    cout<<"A: "<m.a<<"B: "<<m.b<<"C: "<<m.c<<endl;
    cout<<"X: "<<n.x<<"Y: "<<n.y<<"Z: "<<n.z<<endl;
    t=m.a;
    m.a=n.x;
    n.x=t;

    t=m.b;
    m.b=n.y;
    n.y=t;

    t=m.c;
    m.c=n.z;
    n.z=t;
    cout<<"The swapped values are: "<<endl;
    cout<<"A: "<<m.a<<"B: "<<m.b<<"C: "<<m.c<<endl;
    cout<<"X: "<<n.x<<"Y: "<<n.y<<"Z: "<<n.z<<endl;
}
int main(){
    exchangeValues(One m, Two n);
}
