/*
    Create two classes having friend functions
    Make a function add as as friend function of both the classes so that it can access the member variables of both the classes
    and display the sum
*/
#include<iostream>
using namespace std;

class fun1{
private:
    int a,b;
public:
    fun1(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend void add(fun1 f1);
};

class fun2{
private:
    int a,b,c;
public:
    fun2(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    friend void add(fun2 f);
};

void add(fun1 f){
    cout<<"Sum of numbers "<<f.a<<" and "<<f.b<<" = "<<(f.a+f.b)<<endl;
}

void add(fun2 f){
    cout<<"Sum of numbers "<<f.a<<", "<<f.b<<" and "<<f.c<<" = "<<(f.a+f.b+f.c)<<endl;
}

int main(){
    fun1 f1(3,4);
    fun2 f2(3,4,5);
    add(f1);
    add(f2);
}
