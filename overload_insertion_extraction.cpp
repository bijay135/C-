/*
    Write a c++ program to overload insertion and extraction operator
*/
#include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
    }
    void display(){
        cout<<a<<endl<<b<<endl;
    }
    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);
};

ostream& operator <<(ostream& out,Complex c){
    cout<<c.a<<endl;
    cout<<c.b<<endl;
    return out;
}

istream& operator >>(istream& in,Complex &c){
    cin>>c.a;
    cin>>c.b;
}

int main(){

    Complex c1;
    cout<<"Enter the complex number:"<<endl;
    cin>>c1;
    cout<<"you entered "<<endl<<c1;
    return 0;
}
