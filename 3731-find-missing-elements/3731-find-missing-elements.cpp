class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>ans;
        for(int i:nums) st.insert(i);
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        for(int i=mn;i<mx;i++){
            if(!st.contains(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};