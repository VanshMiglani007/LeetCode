class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int l =0;
        int r=nums.size()-1;
        vector<int>ans;
        while(l<n){
            ans.push_back(nums[l]);
            ans.push_back(nums[l+n]);
            l++;
            
        }
        return ans;
    }
};