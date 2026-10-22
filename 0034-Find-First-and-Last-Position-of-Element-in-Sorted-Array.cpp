int firstocc(vector<int>& arr,int key){
    int start = 0,ans = -1;
    int end = arr.size() - 1;
    int mid = start + ( end - start )/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){  // right me jao
            start = mid + 1;
        }
        else if(key < arr[mid]){  // left me
            end = mid - 1;
        }
        mid = start + ( end - start )/2;
    }
    return ans;
}
int lastocc(vector<int>& arr,int key){
    int start = 0;
    int ans = -1; // ans = - 1 because to take a non existing index of the array
    int end = arr.size() - 1;
    int mid = start + ( end - start )/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){  // right me jao
            start = mid + 1;
        }
        else if(key < arr[mid]){  // left me jao
            end = mid - 1;
        }
        mid = start + ( end - start )/2;
    }
    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstocc(nums,target);
        int last = lastocc(nums,target);
        return {first, last};
    }
};
