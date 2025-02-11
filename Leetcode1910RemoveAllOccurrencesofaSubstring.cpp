class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(true){
            int idx = s.find(part);

            if(idx == string::npos){
                break;
            }
            s.erase(idx, part.length()); // erase from index where it started to match both the string
        }
        return s;

    }

};