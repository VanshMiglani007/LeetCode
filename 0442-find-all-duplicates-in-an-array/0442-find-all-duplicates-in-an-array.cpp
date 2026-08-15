class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i:nums){
            int idx=abs(i)-1;
            if(nums[idx]<0) ans.push_back(abs(i));
            else nums[idx]=-nums[idx];
        }
        return ans;
    }
};