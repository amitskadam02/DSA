#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=0;row<n;row=row+1){
        //spaces
        for(int col=0;col<row;col=col+1){
            cout<<" ";
        }
        //star
        int totalcol=n-row;
        for(int col=0;col<totalcol;col=col+1){
            if(col==0||col==totalcol-1){
                cout<<"* ";//star and one space added here  
            }
            else{
                cout<<"  ";// two spaces are here
            }

        }
        cout<<endl;
    }


}