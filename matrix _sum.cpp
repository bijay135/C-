/*
WAP in c++ which will ask two matrix from the user and display the sum of those 2 matrix.
*/
#include<iostream>
using namespace std;
int main(){
    int r,c,i,j,add;
    cout<<"Enter number of rows:";
    cin>>r;
    cout<<"Enter number of columns:";
    cin>>c;
    int a[r][c];
    int b[r][c];
    int sum[r][c];
    cout<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"Enter "<<i<<" "<<j<<" element of matrix A:";
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"Enter "<<i<<" "<<j<<" element of matrix B:";
            cin>>b[i][j];
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            add=a[i][j]+b[i][j];
            sum[i][j]=add;
        }
    }
    cout<<endl<<"sum of matrix is\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<i<<" "<<j<<" element of sum of matrix A and B ="<<sum[i][j]<<endl;
        }
    }
}
