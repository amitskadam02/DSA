// Online C++ compiler to run C++ program online
// First Non repeating char in stream
#include <iostream>
#include<queue>

using namespace std;

int main() {
    // Write C++ code here
    string str = "ababc";
    int freq[26] = {0};
    queue<char>q;
    
    for(int i = 0; i< str.length(); i++){
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);
        
        // find answer
        while(!q.empty()){
            char frontChar = q.front();
            if(freq[frontChar-'a'] > 1){
                q.pop();
            }
            else{
                // this is the answer
                // 1 element case
                cout<<frontChar<<endl;
                break;
            }
        }
        
        if(q.empty()){
            cout<<"#"<<endl;
        }
    }
    
    // print
    // for(int i = 0; i < 26; i++)
    // {
    //     cout<<i<<":"<<freq[i]<<" ";
    // }
    


    return 0;
}