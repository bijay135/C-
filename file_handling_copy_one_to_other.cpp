/*
WAP which will copy the content of one text file to another text file changing the case of alphabets.
*/
#include<iostream>
#include<fstream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

class alp{
public:
    void ChangeCase(char* s)
    {
	for(int i=0;s[i];i++)
	{
		if((s[i] > 64)&&(s[i] < 91)) //check if in range of upper case characters
		{
			s[i] += 32; //is upper, offset 32 to make lower
		}
		else if((s[i] > 96)&&(s[i] < 123)) //check if in range of lower case characters
		{
			s[i] -= 32; //is lower, offset -32 to make upper
		}
	}
}
};
int main(){
    int i=0;
    alp a;
    char data[100];
    ofstream outfile;
    outfile.open("text1.txt");
    outfile<<"sabINa";
    outfile.close();
    ifstream infile;
    infile.open("text1.txt");
    while(!infile.eof()){
        infile.get(data);
        data=a.ChangeCase(data);
    }
    infile.close();
    ofstream file;
    file.open("text2.txt");
    outfile<<data[];
    file.close();

    return 0;
}


