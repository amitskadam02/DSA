#include <iostream>

using namespace std;

int main(){

    int num=8;
    int n=4;

    for(int row=0;row<n;row=row+1){
        //invetrd pyramid1
        for(int col=0;col<n-row;col=col+1){
            cout<<"*";
        }

        //full space traingle
        for(int col=0;col<2*row+1;col=col+1){
            cout<<" ";
        }

        //inverted pyramid2
         for(int col=0;col<n-row;col=col+1){
            cout<<"*";
        }

        cout<<endl;
    }

     for(int row=0;row<n;row=row+1){
        //invetrd pyramid1
        for(int col=0;col<row+1;col=col+1){
            cout<<"*";
        }

        //full space traingle
        for(int col=0;col<2*n-2*row-1;col=col+1){
            cout<<" ";
        }

        //inverted pyramid2
         for(int col=0;col<row+1;col=col+1){
            cout<<"*";
        }

        cout<<endl;
    }
}