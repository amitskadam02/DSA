// Leetcode:3223:Medium
class Solution {
public:
    int minimumLength(string s) {
        int count[26]{0};
        for (auto c : s) {
            count[c - 'a']++;
        }

        int ans = 0;
        for (int x : count) {
            if (x > 0) {
                ans = ans + (x % 2 ? 1 : 2);
            }
        }
        return ans;
    }
    
};