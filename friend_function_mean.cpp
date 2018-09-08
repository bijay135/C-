/*
    Write a code to find the mean of five numbers using friend functions
*/
#include<iostream>
using namespace std;
class Mean{
    private:
        int v1,v2,v3,v4,v5;
        int total=0;
    public:
        Mean(){
        }
        Mean(int v1, int v2, int v3, int v4, int v5){
            this->v1=v1;
            this->v2=v2;
            this->v3=v3;
            this->v4=v4;
            this->v5=v5;
        }
        friend void meanCalculation(Mean m1);
};
void meanCalculation(Mean m1){
    int z;
    z=m1.v1+m1.v2+m1.v3+m1.v4+m1.v5;
    m1.total=z/5;
    cout<<"The mean of five values is: "<<m1.total<<endl;
}
int main(){
    int x1,x2,x3,x4,x5;
    cout<<"Enter the first value: "<<endl;
    cin>>x1;
    cout<<"Enter the second value: "<<endl;
    cin>>x2;
    cout<<"Enter the third value: "<<endl;
    cin>>x3;
    cout<<"Enter the fourth value: "<<endl;
    cin>>x4;
    cout<<"Enter the fifth value: "<<endl;
    cin>>x5;
    Mean M(x1,x2,x3,x4,x5);
    meanCalculation(M);
}
