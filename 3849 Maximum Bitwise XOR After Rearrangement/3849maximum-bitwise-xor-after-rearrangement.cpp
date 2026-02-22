class Solution {
public:
    string maximumXor(string s, string t) {
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '0')
                count0++;
            if (t[i] == '1')
                count1++;
        }
        string res = "";
        for (char c : s) {
            if (c == '0') {
                if (count1 > 0) {
                    res += '1';
                    count1--;
                } else {
                    res += '0';
                }
            }
                else {
                    if (count0 > 0) {
                        res += '1';
                        count0--;
                    } else
                        res += '0';
                }
            }
        return res;
    }
};