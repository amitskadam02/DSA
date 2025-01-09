// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    
    string str = "ababc";
    int freq[26] = {0};
    
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch-'a']++;
    }
    
        for(int i=0; i<26; i++){
        cout<<char(i+'a')<<":"<<freq[i]<<" ";
    }

    return 0;
}