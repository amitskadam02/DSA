// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

int main() {
    
    queue<char>q;
    string str = "ababc";
    int freq[26] = {0};
    
    for(int i=0; i<str.length(); i++){
        char ch = str[i];//step1
        freq[ch-'a']++; //step2
        q.push(ch); // step3
    
    
    // find ans
    while(!q.empty()){
        char frontCharacter = q.front();
        if(freq[frontCharacter - 'a'] > 1){
            // this is not he answer
            q.pop();
        }
        else{
            // this is the answer
            cout<<frontCharacter<<"->";
            break; // you will forgot about this
        }
    }
    
    if(q.empty()){
        cout<<"#"<<"->";
    }
    }

    return 0;
}