class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;

        int l = 0;
        while(l + 1 < n && nums[l] < nums[l+1]) l++;
        if(l == 0) return false;
        int r = l;
        while(r + 1 < n && nums[r] > nums[r+1]) r++;
        if(r == l || r==n-1) return false;
        int k = r;
        while(k + 1 < n && nums[k] < nums[k+1]) k++;

        return k == n - 1;
    }
};
