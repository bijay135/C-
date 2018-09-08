#include<iostream>
using namespace std;

class weapon
{
public:
    void loadFeatures()
    {cout<<"Loading weapon features.\n";}
};
class Bomb:public weapon
{
public:
    void loadFeatures()
    {cout<<"Loading bomb features.\n";}
};
class Gun:public weapon
{
public:
    void loadFeatures()
    {cout<<"Loading gun features.\n";}
};
int main()
{
    weapon *w = new weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;
    w->loadFeatures();
    b->loadFeatures();
    g->loadFeatures();
}
