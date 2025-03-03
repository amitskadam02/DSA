// 2161. Partition Array According to Given Pivot
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        // Method:1
        // vector<int>smalltpivot;
        // vector<int>eqaulpivot;
        // vector<int>greatertpivot;

        // for(int i=0;i<n;i++){
        //     int element = nums[i];
        //     if(element < pivot){
        //         smalltpivot.push_back(element);
        //     }
        //     else if(element > pivot){
        //         greatertpivot.push_back(element);
        //     }
        //     else{
        //         eqaulpivot.push_back(element);
        //     }
        // }

        // for(auto &num: eqaulpivot){
        //     smalltpivot.push_back(num);
        // }
        // for(auto &num: greatertpivot){
        //     smalltpivot.push_back(num);
        // }
        
        // return smalltpivot;

        // Method2:
        int countlesserthanpivot = 0;
        int countequalpivot = 0;
        for(int &num : nums){
            if(num < pivot){
                countlesserthanpivot++;
            }
            else if(num == pivot){
                countequalpivot++;
            }
        }
        int i= 0; //lesser than pivot
        int j= countlesserthanpivot; //equal to pivot
        int k= countlesserthanpivot + countequalpivot; //lesser than pivot
        vector<int>result(n);
        for(int &num: nums){
            if(num < pivot){
                result[i] = num;
                i++;
            }
            else if(num == pivot){
                result[j] = num;
                j++;
            }
            else{
                result[k] = num;
                k++;
            }
        }
        return result;

    }
};