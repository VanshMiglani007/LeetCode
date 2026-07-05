class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid=nums.size()/2;
        int l=0;
        while(l<nums.size()){
            if(l==mid) {
                l++;
                continue;
            }

            if(nums[l]!=nums[mid]){
                l++;
            }
            else return false;
        }
        return true;
    }
};