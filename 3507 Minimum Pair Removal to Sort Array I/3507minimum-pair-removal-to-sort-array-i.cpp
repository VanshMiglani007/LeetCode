class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int o= 0;
        if(isSorted(nums)) return 0;
        while(!isSorted(nums)){

        int l = 0;
        int sum = nums[l]+nums[l+1];
        for (int i = 1;i<nums.size()-1;i++){
            int sum1=nums[i]+nums[i+1];
            if (sum1<sum) {
                sum = sum1;
                l=i;
            }
        }
        nums[l]=sum;
        nums.erase(nums.begin()+l+1);
        o++;
        }
        return o;
    }
};