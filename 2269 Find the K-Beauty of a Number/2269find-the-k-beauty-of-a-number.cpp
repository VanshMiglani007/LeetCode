class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int count = 0;
        int n = s.size();

        for (int i = 0; i <= n - k; i++) {
            string subs = s.substr(i, k);

            int res = stoi(subs);
            if (res != 0 && num % res == 0) count++;
        }
        return count;
    }
};