class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        char target = digit + '0';

        for (int x : nums) {
            string s = to_string(x);
            for (char c : s) {
                if (c == target)
                    count++;
            }
        }

        return count;
    }
};