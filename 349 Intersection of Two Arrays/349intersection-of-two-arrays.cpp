class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        vector<int> arr;
        int l = 0;
        while (l < nums1.size()) {
            s.insert(nums1[l]);
            l++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (s.find(nums2[i]) != s.end()) {
                arr.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return arr;
    }
};
