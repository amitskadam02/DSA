// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

char find(string str){
    unordered_map<char, int>freq;
    
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    
    for(int i = 0; i< str.length(); i++){
        if(freq[str[i]] == 1){
            return str[i];
        }
    }
    return '\0';
}

int main() {
    // Write C++ code here
    string str = "SWISS";
    cout<<find(str);

    return 0;
}