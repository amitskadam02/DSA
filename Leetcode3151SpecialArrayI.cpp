class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        // if(nums.size() == 0){
        //     return false;
        // }

        // if(nums.size() == 1){
        //     return true;
        // }

        // int count = 0;
        // for(int i=0;i<nums.size();i+2){
        //     if(nums[i] % 2 == 0){
        //     }
        // }
        // for(int i=1;i<nums.size();i+2){
        //     if(nums[i] % 2 != 0){
        //         count++ ;
        //     }
        // }

        // if (count == 2){
        //     return true;
        // }
        // else{
        //     return false;
        // }

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] % 2 == nums[i-1] % 2){
                return false;
            }
            
        }
        return true;
    }
};