/*
    Write a C++ program to open a file in read and write format
*/
#include<iostream>
#include<fstream>
using namespace std;
class Read{
    ofstream file;
    file.open("myfile.txt",ios::in|ios::out);
};
