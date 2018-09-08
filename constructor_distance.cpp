/*
public, instant member function, name same as class name with ~ symbol, cannot be static, no return type, no arguments
overloading not possible, invoked by compiler itself.
*/

/*
Create a class to measure distances as feet, feet should be in integer and inches should be in float,
Include the member functions to set and get attributes.
Include the constructors to add two distances.
*/
#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inch;
    public:
        Distance(){
        }
        Distance(int a, float b){
            feet = a;
            inch = b;
        };
    void setFeet(int a){
        feet = a;
    }
    void setInch(float  b){
        inch = b;
    }
    int getFeet(){
        return feet;
    }
    float getInch(){
        return inch;
    }
};
int main(){
    Distance D1;
    Distance D2;
    int f;
    float i;
    cout<<"Enter first distance in feet"<<endl;
    cin>>f;
    D1.setFeet(f);
    cout<<"Enter first distance in inch"<<endl;
    cin>>i;
    D1.setInch(i);
    cout<<"Enter second distance in feet"<<endl;
    cin>>f;
    D2.setFeet(f);
    cout<<"Enter second distance in inch"<<endl;
    cin>>i;
    D2.setInch(i);
    cout<<"Sum of distances in feet:"<<D1.getFeet()+D2.getFeet()<<endl;
    cout<<"Sum of distances in inch:"<<D1.getInch()+D2.getInch()<<endl;
}
