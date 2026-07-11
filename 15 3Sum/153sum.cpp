class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long sum=0;
        for(int k=0;k<n-2;k++){
            if(k>0&&nums[k]==nums[k-1]) continue;
            int l=k+1;
            int r=n-1;

            while(l<r){
                sum=nums[k]+nums[l]+nums[r];

                if(sum==0){
                    ans.push_back({nums[k], nums[l], nums[r]});
                    l++;
                    r--;

                    while(l<r&&nums[l]==nums[l-1]) l++;
                    while(l<r&&nums[r]==nums[r+1]) r--;
                }
                else if(sum>0) r--;
                else l++;
            }
        }
        return ans;
    }
};