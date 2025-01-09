// leetcode:2185:Easy
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i = 0; i < words.size(); i++){
            if(words[i].find(pref) == 0){ 
                // taking first first string from vector and find(pref) will give index of 
                // words[i] where pref match
                count++;
            }
        }
        return count;
    }
};