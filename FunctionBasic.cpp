
#include<iostream>

using namespace std;


void printmsg();

int add(int a, int b){

    return a+b;
}

int main(){

    printmsg();

    add(10,200);

    return 0;
}

void printmsg(){

    for(int i=0;i<5;i++){

        cout<<"Hi Deepak"<<endl;
    }
}