class Solution {
public:
    // Using Dynamic Programming.
    int solveUsingMem(int n, vector<int>&dp){ 
        // base case
        if(n == 0 || n == 1){
            return n;
        }

        // step3: if ans already exist in dp array then return.
        if(dp[n] != -1){
            return dp[n];
        }
        // step2: store and return ans in dp array then return.
        dp[n] = solveUsingMem(n-1, dp) + solveUsingMem(n-2, dp);
        return dp[n];
    }
    int fib(int n) {
        // // base case: compulsory
        // if(n == 0 || n == 1){
        //     return n;
        // }
        // // processing: optional
        // // recursive relation: compulsory
        // return fib(n-1) + fib(n-2);

        // step1: creation of dp array
        vector<int> dp(n+1,-1);
        int ans = solveUsingMem(n, dp);
        return ans;
    }

};