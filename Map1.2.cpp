#include <iostream>
#include <unordered_map>

using namespace std;

void countCharacters(string s, unordered_map<char, int>&mapping){
    for(auto i:s){
        char ch = i;
        mapping[ch]++;
    }
}
int main(){
    string s = "AmitKadam";
    unordered_map<char, int>mapping;
    
    countCharacters(s, mapping);
    
    for(auto i: mapping){
        cout<<i.first<<"-->"<<i.second<<endl;;
    }
    
    return 0;
}