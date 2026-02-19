class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int l =0;
        while(l<nums.size()){
            if(nums[l]==target){
                res.push_back(l);
            }
            l++;
        }
        return res;
    }
};