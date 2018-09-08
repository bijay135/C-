/*
    Write a square class that has the following members:
    - width double
    - length double
    - Virtual function to print square details
    - A function to calculate squares area
    - Appropriate functions and constructors
    Write a cube class that inherit from the square class and specify additional variable named height.
    The class must include functions that include functions that calculates and return the volume and surface area.
    Re-define the function print from the square class.
*/
#include<iostream>
using namespace std;
class Square{
    protected:
        double length,width,area;
    public:
        Square(){
        }
        Square(double length, double width){
            this->length=length;
            this->width=width;
        }
        void calculateArea(){
            area=length*length;
        }
        virtual void printDetails(){
            cout<<"The area of square is: "<<area<<endl;
            cout<<"The width is: "<<width<<endl;
        }
};

class Cube:public Square{
    protected:
        double length,width,volume,surface;
    public:
        Cube(){
        }
        Cube(double length,double width){
            this->length=length;
            this->width=width;
        }
        void calculateVolume(){
            volume=length*length*length;
        }
        void calculateSurfaceArea(){
            surface=6*length*length;
        }
        void printDetails(){
            cout<<"The volume of cube is: "<<volume<<endl;
            cout<<"The surface area of cube is: "<<surface<<endl;
        }
};

int main(){
    double l,w;
    cout<<"Enter the length: "<<endl;
    cin>>l;
    cout<<"Enter the width: "<<endl;
    cin>>w;
    Square S(l,w);
    S.calculateArea();
    S.printDetails();
    Cube C(l,w);
    C.calculateVolume();
    C.calculateSurfaceArea();
    C.printDetails();
}
