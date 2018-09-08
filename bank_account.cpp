/* Define a class to represent the bank account include the following members:
1. Name of the depositor
2. Account No
3. Type of account
4. Balance amount in the account
Member Functions:
1. To assign initial values
2. To deposit an amount
3. TO withdraw an amount after checking the balance
4. To display the name and palace
Write a main program to test the program
*/
#include<iostream>
using namespace std;
class BankAccount{
    private:
        string name;
        int aNumber;
        int aType;
        float bAmount;
    public:
        void assign();
        void deposit(float d);
        void withdraw(float w);
        void display();
};
void BankAccount::assign(){
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    cout<<"Enter type of account"<<endl;
    cin>>aType;
    cout<<"Enter amount"<<endl;
    cin>>bAmount;
}
void BankAccount::deposit(float d){
    bAmount+=d;
}
void BankAccount::withdraw(float w){
    if(bAmount<w){
        cout<<"Your balance is less than withdraw amount"<<endl;
    }
    else{
        bAmount-=w;
    }
}
void BankAccount::display(){
    cout<<"Name "<<name<<endl;
    cout<<"Your balance "<<bAmount<<endl;
}
int main(){
    BankAccount B;
    B.assign();
    B.deposit(15000);
    B.withdraw(5000);
    B.display();
}
