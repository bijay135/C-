#include<tuple>
#include<iostream>
using namespace std;
int main(){
    tuple<string,int,int>t1;
    t1=make_tuple("ABC",15,20);
    tuple<int,string,float>t2;
    t2=make_tuple(100,"XYZ",20.50);
    cout<<"Displaying first tuple"<<endl;
    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;
    cout<<"Displaying second tuple"<<endl;
    cout<<get<0>(t2)<<endl;
    cout<<get<1>(t2)<<endl;
    cout<<get<2>(t2)<<endl;
}
