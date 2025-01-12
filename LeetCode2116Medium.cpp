// Leetcode:2116:Medium
class Solution {
public:
    bool canBeValid(string s, string locked) {
        if((s.size() & 1) != 0){
            return false;
        }

        // scan from left to right
        int open = 0, close = 0, flexible = 0;
        for(int i=0 ;i<s.size(); i++){
            if(locked[i] == '1'){
                if(s[i] == '('){
                    open++;
                }
                else{
                    close++;
                }
            }
            else{
                flexible++;
            }
            if(open + flexible < close){
                return false;
            }
        }

        // scan from right to left
        open = 0, close = 0, flexible = 0;
        for(int i = s.size()-1 ; i>=0; i--){ // i>=0
            if(locked[i] == '1'){
                if(s[i] == ')'){
                    close++;
                }
                else{
                    open++;
                }
            }
            else{
                flexible++;
            }
            if(close + flexible < open){
                return false;
            }
        }
        return true;
    }
};