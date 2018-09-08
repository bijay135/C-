/*
Write a code in c++ to overload !operator to reverse the case of each alphabet in the string
*/
#include<iostream>
using namespace std;
class stringO{
    public:
        char str[50];
    public:
        void acceptString(){
            cout<<"Enter the string"<<endl;
            cin>>str;
        }
        void display(){
            cout<<str;
        }
        void operator!();
};
void stringO::operator!(){
    for(int i=0;str[i]!=0;i++){
        if(str[i]>=65 && str[i]<=96){
            str[i]=str[i]+32;
        }
        else{
            str[i]=str[i]-32;
        }
    }
}
int main(){
    stringO S;
    S.acceptString();
    !S;
    S.display();
}
