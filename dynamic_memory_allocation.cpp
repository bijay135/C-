/*
WAP in c++ to implement dynamic memory allocation asking subject and marks from user
*/
#include<iostream>
using namespace std;
int main(){
    int n,i;
    int *m;
    int sum=0;
    cout<<"Enter number of subject:";
    cin>>n;
    m=new int[n];
    for(i=1;i<=n;i++){
        cout<<"Enter mark of "<<i<<" subject:";
        cin>>m[i-1];
         sum+=m[i-1];
    }
    cout<<"Total marks="<<sum<<endl;
    delete[]m;
    cout<<*m;
    return 0;
}
