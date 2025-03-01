// 2460. Apply Operations to an Array
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(i+1 <nums.size() && nums[i] == nums[i+1]){
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
            if(nums[i] != 0){
                if(i != j)
                swap(nums[i], nums[j]);
                j++;
            }
        }

        // int j=0;
        // for(int i=0; i<nums.size();i++){
        //     if(nums[i] != 0){
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        // while(j<nums.size()){
        //     nums[j] = 0;
        //     j++;
        // }
        return nums;
    }
};