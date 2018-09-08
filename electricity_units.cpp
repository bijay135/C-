/*
An electric board charges the following rates to domestic users to discourage the use of electricity
For the first 100 units 60 paisa per unit
For the first 200 units 80 paisa per unit
For the first 300 units 90 paisa per unit
All users are charged a minimum of rupees 50. If the total amount is more than rupees 300 then an additional such charge
of 15% is added. Write a program to read the names of users and numbers of units consumed.
Also, print out the charges with names
*/
#include<iostream>
using namespace std;
int main(){
    string n;
    int u,a,r;
    cout<<"Enter your name"<<endl;
    getline(cin,n);
    cout<<"Enter the unit consumed"<<endl;
    cin>>u;
    if(u<100){
        a=u*60;
    }
    else if(u>100&&u<200){
        a=u*80;
    }
    else{
        a=u*90;
    }
    a=a/100;
    if(a>300){
        a=a+((15/100)*a);
    }
    if(a<50)
        a=50;
    cout<<"Your name is "<<n<<" and your total charge is "<<a<<endl;
}
