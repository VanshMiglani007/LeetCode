class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        int target=k;
        while(st.contains(target)){
            target+=k;
        }
        return target;
    }
};