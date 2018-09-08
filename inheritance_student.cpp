/*
    Write a C++ program to calculate the percentage of a student using multi level inheritance, to accept the members of three subjects
    in base class A
    A class will be derived from the above mentioned class which includes a function to find the total marks obtained and another class
    derived from this class which calculates and displays the percent of the student.
*/
#include<iostream>
using namespace std;
class A{
    protected:
        int s1;
        int s2;
        int s3;
    public:
        getData(int s1, int s2, int s3){
            this->s1=s1;
            this->s2=s2;
            this->s3=s3;
        }
};
class B:public A{
    protected:
        int marks;
    public:
        void total(){
            marks=s1+s3+s3;
            cout<<"The total is: "<<marks<<endl;
        }
};
class C:public B{
    protected:
        float percent;
    public:
            void display(){
                percent=marks/0.34;
                cout<<"The percent is: "<<percent<<endl;
            }
};
int main(){
    int x1,x2,x3;
    cout<<"Enter marks of first subject: "<<endl;
    cin>>x1;
    cout<<"Enter marks of second subject: "<<endl;
    cin>>x2;
    cout<<"Enter marks of third subject: "<<endl;
    cin>>x3;
    C a1;
    a1.getData(x1,x2,x3);
    a1.total();
    a1.display();
}
