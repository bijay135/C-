/*
    Write a C++ program to use inheritance
*/
#include<iostream>
using namespace std;
class A{
    protected:
        int a;
};
class B:public A{
    public:
            void setdata(int x){
                a=x;
                cout<<a<<endl;
            }
};
int main(){
    B obj1;
    obj1.setdata(2);
    return 0;
}
