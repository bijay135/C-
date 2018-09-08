#include<iostream>
using namespace std;
class super{
    virtual void foo(){
        cout<<"super::foo()"<<endl;
    }
    virtual void foo(int i){
        cout<<"super:foo("<<i<<")"<<endl;
    }
};
class sub:public super{
    public:
        virtual void foo(){
            cout<<"sub:foo"<<endl;
        }
};
int main(){
    sub mysub;
    mysub.foo();
}
