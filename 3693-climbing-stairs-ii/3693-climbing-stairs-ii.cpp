class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>mincost(n+1,INT_MAX);
        mincost[0]=0;
        for(int i=1;i<=n;i++){
            mincost[i]=min(mincost[i],mincost[i-1] + costs[i-1]+1);
            if(i>=2) mincost[i]=min(mincost[i],mincost[i-2] + costs[i-1]+4);
            if(i>=3) mincost[i]=min(mincost[i],mincost[i-3] + costs[i-1]+9);
        }
        return mincost[n];
    }
};