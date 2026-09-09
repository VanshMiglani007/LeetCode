class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive;
        vector<int> negative;
        for(int x:nums){
            if(x<0)
            negative.push_back(x);
            else
            positive.push_back(x);
        }
        int l=0;
        int rp=0;
        int rn=0;
        while(l<n){
            nums[l]=positive[rp];
            l++;
            rp++;
            nums[l]=negative[rn];
            rn++;
            l++;
        }
        return nums;
    }
};