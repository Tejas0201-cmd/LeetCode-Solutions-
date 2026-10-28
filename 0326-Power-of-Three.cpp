class Solution {
public:
    bool isPowerOfThree(int n) {
        long long current_power = 1;
        //Used 'long long' to hold large values safely to prevent integer overflow during multiplication
        for(int i=0;i <= 19;i++){
            if(n == current_power){
                return true;
            }
            // current_power = (current_power * 3) to calculate the next power of 3 for the next turn of the loop
            current_power = current_power * 3;
        }
        return false;
    }
};
