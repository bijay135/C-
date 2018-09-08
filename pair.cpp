#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<string,string>p1;
    pair<string,float>p2;
    p1=make_pair("Nepal","Kathmandu");
    p2=make_pair("XYZ",500.50);
    cout<<"Displaying first pair"<<endl;
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    cout<<"Displaying second pair"<<endl;
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
}
