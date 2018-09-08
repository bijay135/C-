/*
WAP which throws an exception of type int and another type char .
*/
#include<iostream>
using namespace std;

int main(){
    try{
        throw 20;
    }
    catch(int n){
        cout<<"int type exception.\n";
    }
    try{
        throw 'a';
    }
    catch(char n){
        cout<<"char type exception.\n";
    }
}
