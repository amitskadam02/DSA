#include<iostream>
#include<string>

using namespace std;

void charFreq(string str){
    int freq[256] = {0};
    
    for(int i =0; i<str.length(); i++){
        freq[str[i]]++;
    }
    
    // print
    for(int i=0;i<256;i++){
        if(freq[i] != 0)
        cout<<(char)i<<" : "<<freq[i]<<endl;
    }
}

int main(){
    
    string str;
    cout<<"Enter String"<<endl;
    cin>>str;
    
    // fun call
    charFreq(str);
    
    return 0;
}