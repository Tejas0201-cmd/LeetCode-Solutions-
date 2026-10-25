class Solution {
public:
    bool PossibleSolution(vector<int>& nums,int mid, int k){
        int array_count = 1;
        int current_sum = 0;
        for(int i=0;i<nums.size();i++){
            if(current_sum  + nums[i] <= mid){
                current_sum  = current_sum  + nums[i];
            }
            else{
                array_count++;
                if(array_count > k || nums[i] > mid){
                    return false;
                }
                current_sum  = nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
        }
        int e = sum;
        int ans = -1;
        int mid = s + (e - s)/2;
        while(s <= e){
            if(PossibleSolution(nums,mid,k)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};
