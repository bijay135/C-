//WAC in c++ to exchange the different values of two classes using a friend function.
#include<iostream>
using namespace std;

class animal{

public:
    string name;
public:
    animal(){
    }
    animal(string n){
        this->name=n;
    }
    void display(){
        cout<<"animal name= "<<name<<endl;
    }
    friend void changeValues(animal a);

};
class fish{
public:
    string name;
public:
    fish(){
    }
    fish(string n){
        this->name=n;
    }
    void display(){
        cout<<"Fish name= "<<name<<endl;
    }
    friend void changeValues(fish f);
};

void changeValues(animal a,fish f){
    string temp;
    temp=a.name;
    a.name=f.name;
    f.name=temp;
    cout<<"Animal name: "<<a.name<<" and fish name: "<<f.name<<endl;
}

int main(){
    animal a1("Tiger");
    fish f1("Shark");
    a1.display();
    f1.display();
    changeValues(a1,f1);
}
