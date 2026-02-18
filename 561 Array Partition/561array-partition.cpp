class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int l = 0;
        int sum = 0;
        sort(nums.begin(),nums.end());
        while(l<nums.size()){
            sum += nums[l];
            l=l+2;
        }
        return sum;
    }
};