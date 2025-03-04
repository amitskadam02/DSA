// 1780. Check if Number is a Sum of Powers of Three
class Solution {
public:
    bool checkPowersOfThree(int n) {
        // //Method1:
        // int p = 0;
        // while(pow(3, p) <= n){
        //     p++;
        // }
        // while(n > 0){
        //     if(n >= pow(3,p)){
        //         n = n - pow(3,p);
        //     }

        //     if(n >= pow(3,p)){
        //         return false;
        //     }
        //     p--;
        // }
        // return true;

        //Method2:
        while(n > 0){
            if(n % 3 == 2){
                return false;
            }
            n = n/3;
        }
        return true;
        
    }
};