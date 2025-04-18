class Solution {
public:
    int exapnd(string s, int i, int j){
        int count = 0;
        while(i>=0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount = 0;
        for(int center = 0; center< s.length(); center++){
            // odd ans
            int oddAns = exapnd(s, center, center);
            // even ans
            int evenAns = exapnd(s, center, center+1);
            totalCount = totalCount+ oddAns + evenAns;
        }
        return totalCount;
    }
};