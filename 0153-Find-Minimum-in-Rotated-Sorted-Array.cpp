int Pivot(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;
    if(arr[s] <= arr[e]){
        return arr[s];
    }
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
    return arr[s];
}
class Solution {
public:
    int findMin(vector<int>& nums) {
        int output = Pivot(nums);
        return output;
    }
};
