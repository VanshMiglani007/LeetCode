class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
        int j = 1;
        while(j<nums.size()&&i<nums.size()){
            if(nums[i]%2==0){
                i=i+2;
            }
            else if(nums[j]%2==1){
                j=j+2;
            }
            else{
                swap(nums[i],nums[j]);
                i=i+2;
                j=j+2;
            }
        }
        return nums;
    }
};