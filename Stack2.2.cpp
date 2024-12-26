// leetcode 20: Easy: Valid parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == '{' || ch == '[' || ch == '('){
                // for open bracket push
                st.push(ch);
            }
            else{
                // closing bracket
                // if stack is non empty
                if(!st.empty()){
                    if(ch == ')' && st.top() == '('){
                    st.pop();
                    }
                    else if(ch == '}' && st.top() == '{'){
                        st.pop();
                    }
                    else if(ch == ']' && st.top() == '['){
                        st.pop();
                    }
                    else{
                        // no matching bracket
                        return false;
                    }
                }
                else{
                    // stack is empty
                    return false;
                }
                
            }
        }
        if(st.size() == 0){
            return true;
        }
        else{
            return false;
        }
        
    }
};