class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> freq(26, 0);
        int i = 0;
        int j = 0;
        int ans = 0;
        while (i < s.size() && j < s.size()) {
            if (freq[s[j] - 'a'] < 2) {
                freq[s[j] - 'a']++;
                j++;
                ans = max(ans, j - i);
            } else {
                freq[s[i] - 'a']--;
                i++;
            }
        }
        return ans;
    }
};