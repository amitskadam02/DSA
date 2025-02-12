class Solution {
public:
    int getdigitSum(int n){
        int digitSum = 0;
        while(n > 0){
            digitSum = digitSum + (n%10);
            n = n/10;
        }
        return digitSum;
    }

    int maximumSum(vector<int>& nums) {
        // TLE   
        int result = -1;
        // for(int i=0; i < nums.size(); i++){
        //     int digitSumi = getdigitSum(nums[i]);

        //     for(int j=i+1; j <nums.size(); j++){
        //         int digitSumj = getdigitSum(nums[j]);

        //         if(digitSumi == digitSumj){
        //             result = max(result, nums[i] + nums[j]);
        //         }
        //     }

        // }

        // return result;

        unordered_map<int, int>mp;
        for(int i =0;i<nums.size();i++){
            int digitSum = getdigitSum(nums[i]);

            if(mp.count(digitSum)){
                result = max(result, nums[i] + mp[digitSum]);
            }
            mp[digitSum] = max(mp[digitSum], nums[i]);
        }
        return result;
    }
};