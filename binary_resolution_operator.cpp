/*
Write a program to implement use of binary resolution operator
*/
#include<iostream>
using namespace std;
class Add{
    public:
    int a,b;
    sum(int,int);
};
Add ::sum(int x,int y){
    int a=x;
    int b=y;
    int c = a + b;
    cout<<c<<endl;
}
int main(){
    Add a1;
    a1.sum(2,3);
    return 0;
}
