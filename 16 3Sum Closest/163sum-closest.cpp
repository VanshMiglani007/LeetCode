class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        int n = nums.size();
        long long sum=0;
        for (int k = 0; k < n - 2; k++) {
            int l = k + 1;
            int r = n - 1;
            while(l<r){
                sum=nums[l]+nums[k]+nums[r];
                if (abs(sum - target) < abs(closest - target)) closest = sum;
                
                if(sum>target){
                    r--;
                }
                else if(sum<target){
                    l++;
                }
                else{
                    return sum;
                }
            }
        }
        return closest;
    }
};