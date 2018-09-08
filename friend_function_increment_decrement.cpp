/*
    Write a code to overload increment and decrement function using friend function
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
    friend void operator ++(oID o1);
    friend void operator --(oID o2);
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

void operator ++ (){
    a++;
    b++;
}

void operator -- (){
    a--;
    b--;
}


int main(){
    oID o1(3,4;
    ++o1;
    o1.display;
    --o1;
    o2.display;
}
