#include<iostream>
using namespace std;
class Cal{
    char Grade;
    int Bonus;
public:
    Cal(){
        Grade='E';
        Bonus=0;
    }
    void Down(int G){
        Grade-=G;
    }
    void Up(int G){
        Grade+=G;
        Bonus++;
    }
    void Show(){
        cout<<Grade<<Bonus<<endl;
    }
};
int main(){
    Cal C;
    C.Down(2);
    C.Show();
    C.Up(7);
    C.Show();
    C.Down(2);
    C.Show();
}
