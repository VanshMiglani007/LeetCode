class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int l = left;
        int count = 0;
        while (l <= right) {
            string s = words[l];
            int i = 0;
            int r = s.size() - 1;
            if (isVowel(s[i])&&isVowel(s[r])) {
                count++;
            }
            l++;
        }
        return count;
    }
};