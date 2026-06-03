class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int minland=INT_MAX;

        for(int i =0;i<landStartTime.size();i++){
            minland=min(minland,landStartTime[i]+landDuration[i]);
        }

        int ans = INT_MAX;

        for(int i =0;i<waterStartTime.size();i++){
            ans=min(ans,max(minland,waterStartTime[i])+waterDuration[i]);
        }
        int minwater=INT_MAX;

        for(int i =0;i<waterStartTime.size();i++){
            minwater=min(minwater,waterStartTime[i]+waterDuration[i]);
        }

        for(int i =0;i<landStartTime.size();i++){
            ans=min(ans,max(minwater,landStartTime[i])+landDuration[i]);
        }

        return ans;
    }
};