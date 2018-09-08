/*
WAP in c++ to create a class test with its 2 data members code and price.
create a constructor, copy constructor and display function for the class to show the value of code and price.
*/
#include<iostream>
using namespace std;
class Test{
private:
    int code;
    float price;
public:
    Test(int a,float b){
        code=a;
        price=b;
    };
    Test(const Test &t);
    void display();
};
Test::Test(const Test &t){
    code=t.code;
    price=t.price;
}
void Test::display(){
    cout<<"Code of product: "<<code<<endl;
    cout<<"Price: "<<price<<endl;
}
int main(){
    Test t(10,5236);
    cout<<"Value of t1 object:\n";
    t.display();
    Test t2= t;
    cout<<"Value of t2 object:\n";
    t2.display();
    return 0;
}
