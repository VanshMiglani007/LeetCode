class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(l<2||nums[i]!=nums[l-2]){
                nums[l]=nums[i];
                l++;
            }
        }
        return l;
    }
};