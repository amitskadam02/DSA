// Easy: 169 Majority Element
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    return nums[(0 + nums.size() - 1) / 2];
  }
};

//
