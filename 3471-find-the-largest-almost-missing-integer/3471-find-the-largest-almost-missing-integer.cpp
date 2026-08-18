class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }
        if (k == 1) {
            int mx = -1;
            for (auto it : mp) {
                if (it.second == 1) {
                    mx = max(mx, it.first);
                }
            }
            return mx;
        }
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }
        while (k > 1 && k < n) {
            int l = 0;
            int r = k-1;
            int m = k;
            int f = 0;
            vector<int> fr(51, 0);
            while (l <= n-k) {
                unordered_set<int>st;
                for(int i=l;i<=r;i++){
                    st.insert(nums[i]);
                }
                for(int x:st){
                    fr[x]++;
                }
                l++;
                r++;
            }
            int lar = -1;
            for (int i = 0; i < fr.size(); i++) {
                if (fr[i] == 1) {
                    lar = max(lar,i);
                }
            }
            return lar;
        }
        return -1;
    }
};