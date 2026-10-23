int getPivot(vector<int>& arr,int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}
int BinarySearch(vector<int>& arr,int start,int end,int key){
    int s = start;
    int e = end;
    int mid = s + (e - s)/2;
    while( s <= e ){
        if(arr[mid] == key){
            return mid;
        }
        else if( key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    } 
   return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums,nums.size());
        if(target >= nums[pivot] && target <= nums[nums.size() - 1]){
            return BinarySearch(nums,pivot,nums.size() - 1,target);
        }
        else{
            return BinarySearch(nums,0,pivot - 1,target);
        }
    }
};
