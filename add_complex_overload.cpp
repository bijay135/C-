/*
    Add two complex number using operator overloading
*/
#include<iostream>
using namespace std;
class complex{
private:
int a, b;
public:
    void setdata(int x, int y){
    a=x;
    b=y;
    }
void display(){
    cout<<a;
    cout<< endl;
    cout<<b;
}
complex operator +(complex c)
{
    complex temp;
    temp.a = a+c.a;
    temp.b = b+c.b;
    return(temp);
}
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3 = c1+c2;
    c3.display();
    return 0;
}
