class Solution {
public:
    bool hasSameDigits(string s) {
        string ans = "";
        while (s.size() > 2) {
            ans = "";
            for (int i = 0; i < s.size() - 1; i++) {
                int sum = ((s[i] - '0') + (s[i + 1]) - '0') % 10;
                ans += char(sum + '0');
            }
            s = ans;
            if (s.size() == 2)
                break;
        }
        if (ans[0] == ans[1])
            return true;
        else
            return false;
    }
};