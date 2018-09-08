/*
    Overload increment and decrement operators using friend function as well as without using friend function
*/
#include<iostream>
using namespace std;
class oID{
private:
    int a,b;
public:
    oID(){
    }
    oID(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend void operator ++(oID o);
    friend void operator --(oID o);
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

void operator ++ (oID o){
    o.a++;
    o.b++;
}

void operator -- (oID o){
    o.a--;
    o.b--;
}


int main(){
    oID o1(3,4);
    ++o1;
    o1.display();
    --o1;
    o1.display();
}
