// leetcode:239:Hard
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dq;

        // process first window 
        for(int i = 0; i < k; i++){
            int element = nums[i];
            // remove all small element in queue
            while(!dq.empty() && element > nums[dq.back()])
            {
                dq.pop_back();
            }
            // now insert index of maximum element, in window of k, into deque
            dq.push_back(i);
        }

        // Process remaining window
        for(int i=k; i<nums.size(); i++){
            // store ans
            ans.push_back(nums[dq.front()]);

            // Removal
            // out of range
            if(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }
            // small element
            int element = nums[i];
            // remove all small element in queue
            while(!dq.empty() && element > nums[dq.back()])
            {
                dq.pop_back();
            }

            // Addition
            dq.push_back(i);
        }

        // store last window answer
        ans.push_back(nums[dq.front()]);

        return ans;
    }

};