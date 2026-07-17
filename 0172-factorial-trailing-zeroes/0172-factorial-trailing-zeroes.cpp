class Solution {
public:
    int trailingZeroes(int n) {
        int count2 = 0;
        int count5 = 0;
        for (int i = 2; i <= n; i=i*2) {
            count2 += n / i;
        }
        for (int i = 5; i <= n; i*=5) {
            count5 += n / i;
        }
        return min(count2, count5);
    }
};