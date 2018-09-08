#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream I;
    I.open("count.txt");
    cout<<"Reading from file"<<endl;
    char word[30];
    int count=0;
    string line;
        while(!I.eof())
	{
		I>>word;
		count++;
	}
    cout<<"Number of words in file are: "<<count;
    count=0;
    ifstream file;
    file.open("count.txt");
	while (getline(file, line)){
        count++;
    }
    cout << "\nNumbers of lines in the file : " <<count<<endl;
    I.close();
    return 0;
}
