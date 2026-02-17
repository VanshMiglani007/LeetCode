class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int count = 1;
        int l =0;
        if(nums.size()<3) return nums[0];
        while(l<nums.size()-1){
            if(nums[l]==nums[l+1]){
                l++;
            }
            else{
                count++;
                l++;
                if(count==3) return nums[l];
            }
        }
        return nums[0];
    }
};