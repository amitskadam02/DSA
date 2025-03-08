class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt = count(blocks.begin(), blocks.begin() + k, 'W');
        int ans = cnt;
        for (int i = k; i < blocks.size(); ++i) {
            cnt += blocks[i] == 'W';
            cnt -= blocks[i - k] == 'W';
            ans = min(ans, cnt);
        }
        return ans;
    }
};
// class Solution {
// public:
//     int minimumRecolors(string blocks, int k) {
//         int n = blocks.size();
//         int sum = 0;
//         int maxSum = INT_MIN;
//         for(int i=0; i<k; i++){
//             if(blocks[i] == 'B'){
//                 sum++;
//             }
//         }
//         maxSum = sum;
//         for(int i=k; i<n-k+1; i++){
//             for(int j=i; j<k; j++){
//                 if(blocks[j] == 'B'){
//                     sum = sum + 1;
//                 }
//             }
//             maxSum = max(maxSum, sum);
//             sum = 0;
//         }
//         if(maxSum == k){
//             return 0;
//         }
//         return maxSum-k;
//     }
// };