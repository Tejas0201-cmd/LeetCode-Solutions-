class Solution {
public:
    bool isPowerOfFour(int n) {
        // long long => to avoid overflow of number
        long long current_power = 1;
        for(int i=0;i <= 15;i++){
            if(n == current_power){
                return true;
            }
            current_power = current_power * 4;
        }
        // return false here as if inside the loop every condition gets checked and then if it didn't worked so return false after the loop
        return false;
    }
};
