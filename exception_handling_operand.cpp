/*
    Write a program in c++ to ask and operand and two numbers from the user and do the operation according to operand and handle
    the exception in the case operand entered is not valid operand
*/
#include<iostream>
using namespace std;
class Operand{
    private:
        float a,b,result;
        char x;
    public:
        void cal();
};

void Operand::cal(){
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Enter the operand: "<<endl;
    cin>>x;
    try{
        switch(x){
            case '+':
                result=a+b;
                cout<<"Sucessfully calculated "<<result<<endl;
            break;
            case '-':
                result=a-b;
                cout<<"Sucessfully calculated "<<result<<endl;
            break;
            case '/':
                result=a/b;
                cout<<"Sucessfully calculated "<<result<<endl;
            break;
            case '*':
                result=a*b;
                cout<<"Sucessfully calculated "<<result<<endl;
            break;
            default:
                throw(x);
        }
    }
    catch(char x){
        cout<<"Error!!! Invalid Operand"<<endl;
    }
}
int main(){
    Operand O;
    O.cal();
}
