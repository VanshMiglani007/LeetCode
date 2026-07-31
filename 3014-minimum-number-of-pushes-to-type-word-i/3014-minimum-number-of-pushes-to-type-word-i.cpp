class Solution {
public:
    int minimumPushes(string word) {
        int count;
        int temp;
        int ans=0;
        if (word.size() <= 8) {
            return word.size();
        } else {
            ans = 8;
            count = word.size() - 8;
            int temp = 2;
            while (count > 0) {
                if (count >= 8) {
                    ans += 8 * temp;
                    count -= 8;
                } else {
                    ans += count * temp;
                    count = 0;
                }
                temp++;
            }
        }
        return ans;
    }
};