class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int l = 0;
        int i = 0;
        while (i < n) {
            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }
            chars[l++] = curr;
            if (count > 1) {
                string freq = to_string(count);

                for (char c : freq) {
                    chars[l++] = c;
                }
            }
        }
        return l;
    }
};