class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        vector<long long> count(26, 0);
        const int MOD = 1e9 + 7;
        for (char c : s) {
            count[c - 'a']++;
        }

        while (t--) {
            vector<long long> next(26, 0);

            for (int i = 0; i < 25; i++) {
                next[i + 1] = count[i];
            }
            next[0] = (next[0] + count[25]) % MOD;
            next[1] = (next[1] + count[25]) % MOD;

            count = next;
        }

        long long ans = 0;
        for (int i = 0; i < 26; i++) {
            ans = (ans + count[i]) % MOD;
        }
        return ans;
    }
};