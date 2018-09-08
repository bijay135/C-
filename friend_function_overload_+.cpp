#include<iostream>
using namespace std;

class opp{
private:
    int a;
public:
    opp(){
    }
    opp(int a){
        this->a=a;
    }
    friend operator +(opp o);
    void display(){
        cout<<a<<endl;
    }
};

operator +(opp o){
    opp temp;
    temp.a=a+o.a;
    return temp;
}

int main(){
    opp o1(3),o2(4),o3;
    o3=o1+o2;
    o1.display();
    o2.display();
    o3.display();
}
