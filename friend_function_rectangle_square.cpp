/*
    create a class rectangle with its member functions length and breadth.
    make this class a friend of another class square and display all the attributes of both classes.
*/
#include<iostream>
using namespace std;

class Rectangle{
protected:
    int length;
    int breadth;
public:
    void display(){
        cout<<"length of rectangle="<<length<<endl<<"breadth of rectangle="<<breadth<<endl;
    }
};
class Square{

protected:
    int side=5;
public:
    friend class Rectangle;

};
void display(Square s){
    cout<<"Side of square="<<s.side;
}
int main(){
    Square s1;
    display(s1);
}
