class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(),maximumHeight.end(),greater<int>());
        long long ans=0;
        int prev=INT_MAX;
        for(int h:maximumHeight){
            prev=min(prev-1,h);
            if(prev<=0) return -1;
            ans+=prev;
        }
        return ans;
    }
};