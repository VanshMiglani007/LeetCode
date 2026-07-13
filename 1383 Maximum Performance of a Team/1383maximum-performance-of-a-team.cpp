class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>eng;
        for(int i=0;i<n;i++){
            eng.push_back({efficiency[i], speed[i]});
        }
        sort(eng.begin(),eng.end(),greater<pair<int, int>>());
        priority_queue<int,vector<int>,greater<int>>pq;
        long long sum=0;
        long long ans=0;
        for(auto e:eng){
            long long eff=e.first;
            long long spd=e.second;

            pq.push(spd);
            sum+=spd;

            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            ans = max(ans,sum*eff);
        }
        return ans % 1000000007;
    }
};