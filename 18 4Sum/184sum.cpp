class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        if(nums.size()<4) return res;
        for (int i = 0; i < nums.size() - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < nums.size() - 2; j++) {
                if (j > i+1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int r = j + 1;
                int k = nums.size() - 1;
                while (r < k) {
                    long long sum = (long long)nums[i] + nums[j] + nums[r] + nums[k];
                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[r], nums[k]});
                        r++;
                        k--;

                        while (r < k && nums[r] == nums[r - 1])
                            r++;
                        while (r < k && nums[k] == nums[k + 1])
                            k--;
                    }
                    else if (sum < target) {
                        r++;
                    }
                    else {
                        k--;
                    }
                }
            }
        }
        return res;
    }
};