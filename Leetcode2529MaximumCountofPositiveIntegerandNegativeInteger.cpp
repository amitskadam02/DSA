class Solution {
public:
    int maximumCount(vector<int>& nums) {

        auto lambdaP = [](int num){return num > 0;};
        auto lambdaN = [](int num){return num < 0;};

        int countofPositive = count_if(begin(nums), end(nums), lambdaP);
        int countofnegative = count_if(begin(nums), end(nums), lambdaN);

        return max(countofPositive, countofnegative);
    }
};