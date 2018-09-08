#include<iostream>
using namespace std;

class Weapon{
public:
    void features(){
        cout<<"loading weapon features.\n";
    }
};
class Bomb:public Weapon{
public:
    void features(){
        cout<<"loading bomb features.\n";
    }
};
class Gun:public Weapon{
public:
    void features(){
        cout<<"loading gun features.\n";
    }
};
class loader{
public:
    void loadFeatures(Weapon *weapon){
       weapon->features();
    }
};
int main(){
    loader *l=new loader;
    Weapon *w;
    Bomb b;
    Gun g;

    w=&b;
    l->loadFeatures(w);

    w=&g;
    l->loadFeatures(w);

    return 0;
}
