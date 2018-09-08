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
    void operator ++(){
        a++;
        b++;
    }
    void operator --(){
        a--;
        b--;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main(){
    oID o1(3,4);
    cout<<"Overloading Increment Operator"<<endl;
    ++o1;
    o1.display();
    cout<<"Overloading Decrement Operator"<<endl;
    --o1;
    o1.display();
}
