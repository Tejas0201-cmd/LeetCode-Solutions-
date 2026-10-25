class Solution {
public:
    bool isSolution(vector<int>& weights, int mid ,int days){
        int days_needed = 1;
        int current_day_weight = 0;
        for(int i=0;i<weights.size();i++){
            if(weights[i] + current_day_weight <= mid){
                current_day_weight = current_day_weight + weights[i];
            }
            else{
                days_needed++;
                if(weights[i] > mid || days_needed > days){
                    return false;
                }
                current_day_weight = weights[i];
            }
        }
        return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int sum = 0;
        for(int i=0;i < weights.size();i++){
            sum = sum + weights[i];
        }
        int e = sum;
        int ans = -1;
        int mid = s + (e - s)/2;
        while(s <= e){
            if(isSolution(weights,mid,days)){
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
