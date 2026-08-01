class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        unordered_set<int>st1;
        unordered_set<int>st2;
        for(int x:nums1) st1.insert(x);
        for(int y:nums2) st2.insert(y);
        for(int x:st1){
            if(!st2.contains(x)){
                ans[0].push_back(x);
            }
        }
        for(int x:st2){
            if(!st1.contains(x)){
                ans[1].push_back(x);
            }
        }
        return ans;
    }
};