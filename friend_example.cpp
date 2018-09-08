#include<iostream>
using namespace std;

class A{
    private:
        int a,b;
    public:
        void fun(){
            cout<<"Xitiz"<<endl;
        }
};
class B{
    public:
        int b;
        int c;
        friend void A::fun();
        friend class A;
};
