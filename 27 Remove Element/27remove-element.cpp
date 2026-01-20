class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0;
        int k=0;
        while(l<nums.size()){
            if(nums[l]!=val){
                nums[k]=nums[l];
                k++;
            }
            l++;
        }
        return k;
        }
};