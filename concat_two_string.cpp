/*
Write a c++ program to contat two string
*/
#include<iostream>
#include<string>
using namespace std;
class concatString{
    private:
        string str;
    public:
        concatString(){}
        concatString(string s){
            str = s;
        }
        void display(){
            cout<<str<<endl;
        }
        concatString operator+(concatString s){
            concatString t;
            t = str + s.str;
            return t;
        }
};

int main(){
    concatString s1("Hello"),s2(" World"),s3;
    s3 = s1 + s2;
    s3.display();
}
