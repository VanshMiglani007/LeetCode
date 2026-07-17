class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int l=0;
        int r=nums.size()-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                int f=mid;
                int s=mid;
                while(f>0&&nums[f-1]==target){
                    f--;
                }
                while(s<nums.size()-1&&nums[s+1]==target){
                    s++;
                }
                return {f,s};
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else l=mid+1;
        }
        return {-1,-1};
    }
};