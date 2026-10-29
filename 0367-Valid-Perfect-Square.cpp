class Solution {
public:
    bool isPerfectSquare(int num) {
        // long long => used to avoid overflow as i * i can go out of range of int
        for(long long i=1;i * i <= num;i++){
        // i * i <= num because to avoid tle and to avoid unnecessary steps 
            if(num == (i * i)){
                return true;
            }
        }
        // If the loop runs for every value and dont find the perfect square so return false after the loop (avoid to return false in the loop)
        return false;
    }
};
