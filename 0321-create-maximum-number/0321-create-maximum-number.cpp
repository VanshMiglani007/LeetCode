class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> st;
        int remove = nums.size() - k;
        for (int x : nums) {
            while (!st.empty() && remove > 0 && st.back() < x) {
                st.pop_back();
                remove--;
            }
            st.push_back(x);
        }
        st.resize(k);
        return st;
    }
    bool greater(vector<int>& a, int i,vector<int>& b, int j) {
        while (i < a.size() && j < b.size()) {
            if (a[i] != b[j])
                return a[i] > b[j];
            i++;
            j++;
        }
        return (a.size() - i) > (b.size() - j);
    }
    vector<int> merge(vector<int>& a, vector<int>& b) {
        vector<int> result;
        int i = 0;
        int j = 0;
        while (i < a.size() || j < b.size()) {
            if (greater(a, i, b, j)) {
                result.push_back(a[i]);
                i++;
            }
            else {
                result.push_back(b[j]);
                j++;
            }
        }
        return result;
    }
    vector<int> maxNumber(vector<int>& nums1,vector<int>& nums2,int k) {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int start = max(0, k - n2);
        int end = min(k, n1);

        for (int i = start; i <= end; i++) {
            vector<int> a = maxSubsequence(nums1, i);
            vector<int> b = maxSubsequence(nums2, k - i);
            vector<int> candidate = merge(a, b);
            if (ans.empty() || greater(candidate, 0, ans, 0)) {
                ans = candidate;
            }
        }
        return ans;
    }
};
