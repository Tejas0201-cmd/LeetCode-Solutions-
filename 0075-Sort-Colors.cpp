class Solution {
public:
    void sortColors(vector<int>& nums) {
        // this for loop is used for counting round
        for(int i=1;i<nums.size();i++){
            // n - i th index because as round passes ith (last) element gets sorted and not considered in next round
            for(int j = 0;j<nums.size()-i;j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};
