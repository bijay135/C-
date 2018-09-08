/*
    Write a C++ program to add two number using single inheritance. Accept these two numbers from the user in base class and display the sum
    of these two numbers in derived class.
*/
#include<iostream>
using namespace std;
class A{
    protected:
        int a,b;
    public:
        setData(int a, int b){
            this->a=a;
            this->b=b;
        }
};
class B:public A{
    public:
            void display(){
                cout<<"The sum is: "<<a+b<<endl;
            }
};
int main(){
    int x,y;
    cout<<"Enter first and second number: "<<endl;
    cin>>x>>y;
    B o2;
    o2.setData(x,y);
    o2.display();
}
