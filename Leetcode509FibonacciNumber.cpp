class Solution {
public:
    int fib(int n) {
        // base case: compulsory
        if(n == 0 || n == 1){
            return n;
        }
        // processing: optional
        // recursive relation: compulsory
        return fib(n-1) + fib(n-2);
    }
};