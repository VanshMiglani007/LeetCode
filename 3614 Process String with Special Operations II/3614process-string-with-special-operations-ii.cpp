class Solution {
public:
    char processStr(string s, long long k) {
        long long len = 0;

        vector<long long> v;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (c == '*') {
                if (len > 0)
                    len--;
            }

            else if (c == '#') {
                len *= 2;
            }

            else if (c == '%') {
            }

            else {
                len++;
            }

            v.push_back(len);
        }
        if (k >= len)
            return '.';

        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];

            long long prev = 0;
            if (i > 0)
                prev = v[i - 1];

            if (c >= 'a' && c <= 'z'){
                if (k == prev) return c;
            }

            else if (c == '#') {
                k = k % prev;
            }
            else if(c=='%'){
                k=prev-1-k;
            }
        }
        return '.';
    }
};