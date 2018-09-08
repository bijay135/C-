/*
    Write a code in c++ to ask username and password email account
    If the password is less that six digits the exception is to be handled
*/
#include<iostream>
using namespace std;
class Account{
    private:
        string username, password;
    public:
        void accept();
};

void Account::accept(){
    try{
        cout<<"Enter your username: "<<endl;
        cin>>username;
        cout<<"Enter your password: "<<endl;
        cin>>password;
        if(password.length()<6){
            throw(password);
        }
        else{
            cout<<"\nYou have successfully registered"<<endl;
        }
    }
    catch(string password){
        cout<<"\nError!!! Less that six digits in password"<<endl;
    }
}
int main(){
    Account A;
    A.accept();
}
