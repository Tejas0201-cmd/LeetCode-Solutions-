class Solution {
public:
    bool PossibleSolution(vector<int>& position, int m,int mid){
        int ball_count = 1;
        int ball_position = position[0];
        for(int i=0;i<position.size();i++){
            if(position[i] - ball_position >= mid){
                ball_count++;
                if(ball_count == m){
                    return true;
                }
                ball_position = position[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int s = 0;
        int maxi = -1;
        for(int i=0;i<position.size();i++){
            maxi = max(maxi,position[i]);
        }
        int e = maxi;
        int ans = -1;
        int mid = s + (e - s)/2;
        while(s<=e){
            if(PossibleSolution(position,m,mid)){
                ans = mid;
                s = mid + 1; // as we have to find max solution
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};
