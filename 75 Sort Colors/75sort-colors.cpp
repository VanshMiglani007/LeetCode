class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int k = nums.size()-1;
        while (r<=k){
            if(nums[r]==0){
                swap(nums[l],nums[r]);
                l++;
                r++;
            }
            else if (nums[r]==1){
                r++;
            }
            else{
                swap(nums[r],nums[k]);
                k--;
            }
        }
    }
};