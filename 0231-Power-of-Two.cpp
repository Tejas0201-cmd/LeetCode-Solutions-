class Solution {
public:
    bool isPowerOfTwo(int n) {
        // i <= 30 (because max power of 2 is 30 & it cover all solution possible)
        for(int i=0;i<=30;i++){ 
            if(n == pow(2,i)){
                return true;
            }
            // no else in the loop as if the condition in 1st round fails so it will immediately return false and exit the loop
        }
        // placing return false after loop ensures to check all possible condition
        return false;
    }
};
