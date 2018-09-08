#include<iostream>
using namespace std;
class Package{
    private:
        int val;
    public:
        Package(){
            val=7;
            cout<<val<<endl;
        }
        Package(int v){
            val = v;
            cout<<val<<endl;
        }
        ~Package(){
            cout<<val<<endl;
            cout<<"Destructor Initiated"<<endl;
        }
};
int main(){
    Package o1(4);
    Package o2(2);
    return 0;
}
