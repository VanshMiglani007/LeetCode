class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++){
            auto result = st.insert(nums[i]);
            if(!result.second) return true;
        }
        return false;
    }
};