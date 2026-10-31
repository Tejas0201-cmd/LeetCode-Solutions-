class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e -s)/2;
        while(s <= e){
            if(nums[mid] == target){
                return true;
            }
            if(nums[mid] == nums[s] && nums[mid] == nums[e]){
                s++;
                e--;
                continue;
            } 
            // Check if left part is sorted
            if(nums[s] <= nums[mid]){
                if(target >= nums[s] && target < nums[mid]){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
            // Check if right part is sorted
            else{
                if(target > nums[mid] && target <= nums[e]){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
            mid = s + (e - s)/2;
        }
        return false;
    }
};
