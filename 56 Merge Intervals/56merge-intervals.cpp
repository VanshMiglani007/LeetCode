class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;

        sort(intervals.begin(),intervals.end());

        ans.push_back(intervals[0]);

        for(int i = 1;i<intervals.size();i++){
            int first = intervals[i][0];
            int second = intervals[i][1];
            int lastTerm = ans.back()[1];

            if(first <= lastTerm){
                ans.back()[1] = max(lastTerm,second);
            }

            else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};