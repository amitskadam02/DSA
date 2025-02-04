class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int ans = 0, sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 || nums[i] > nums[i - 1]) {
                sum += nums[i];
                ans = max(ans, sum);
            } else {
                sum = nums[i];
            }
        }
        return ans;
    }
};