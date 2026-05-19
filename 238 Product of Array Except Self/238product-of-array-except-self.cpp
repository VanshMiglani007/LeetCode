class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        int mul_left = 1;
        int mul_right = 1;

        for(int i =0;i<nums.size();i++){
            ans[i]=mul_left;
            mul_left *= nums[i];
        }
        for(int i =nums.size()-1;i>=0;i--){
            ans[i]*=mul_right;
            mul_right *= nums[i];
        }
        return ans;
    }
};