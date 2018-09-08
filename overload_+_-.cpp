/*
Write a c++ program to overload + operator and - operator
*/
#include<iostream>
using namespace std;
class test{
    public:
    int a,b;
    void acceptdata(){
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
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
    test t1;
    t1.acceptdata();
    cout<<endl;
    t1.display();
    ++t1;
    cout<<endl;
    t1.display();
    return 0;
}
