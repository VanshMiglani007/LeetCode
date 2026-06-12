class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime,
                      vector<int>& profit) {

        int n = startTime.size();

        vector<vector<int>> jobs;

        for (int i = 0; i < n; i++) {
            jobs.push_back({startTime[i], endTime[i], profit[i]});
        }

        sort(jobs.begin(), jobs.end());

        vector<int> dp(n, 0);

        dp[n - 1] = jobs[n - 1][2];

        for (int i = n - 2; i >= 0; i--) {

            int next = lower_bound(
                jobs.begin() + i + 1,
                jobs.end(),
                vector<int>{jobs[i][1], 0, 0}
            ) - jobs.begin();

            int take = jobs[i][2];

            if (next < n)
                take += dp[next];

            int notTake = dp[i + 1];

            dp[i] = max(take, notTake);
        }

        return dp[0];
    }
};