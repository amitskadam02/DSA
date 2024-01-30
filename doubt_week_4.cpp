vector<int> rearrangearray(vector<int> &nums) {
  // 2 ponter approach
  vector<int> ans;
  int odd = 1, even = 0;
  for (int = 0; i < nums.size(); i++) {

    int num = nums[i];
    if (num > 0) {
      ans[even] = num;
      even = even + 2;
    } else {
      ans[odd] = num;
      odd = odd + 2;
    }
  }

  return ans;
}