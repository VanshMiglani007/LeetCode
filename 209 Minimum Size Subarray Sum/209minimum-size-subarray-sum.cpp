class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minsize = INT_MAX;
        int sum=0;
        int l =0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                minsize=min(r-l+1 , minsize);
                sum = sum-nums[l];
                l++;
            }

        }
        if (minsize == INT_MAX) return 0;
        return minsize;
    }
};