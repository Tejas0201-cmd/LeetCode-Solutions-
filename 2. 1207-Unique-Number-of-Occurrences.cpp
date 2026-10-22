class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>counts;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int count = 1;
            while(i+1 < n && arr[i] == arr[i+1]){
                count++;
                i++;
            }
            counts.push_back(count);
        }
            sort(counts.begin(),counts.end());
            for(int j=0;j<counts.size()-1;j++){
                if(counts[j] == counts[j+1]){
                    return false;
                }
            }
        return true;
    }
};
