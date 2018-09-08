#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream O;
    O.open("file.txt");
    char data[100];
    cout<<"Enter your name:"<<endl;
    cin>>data;
    O<<data;
    cout<<"Enter your age"<<endl;
    cin>>data;
    O<<data;
    O.close();

    ifstream I;
    I.open("file.txt");
    cout<<"Reading from file"<<endl;
    I>>data;
    cout<<data;
    I.close();
    return 0;
}
