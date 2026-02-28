class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0;
        long long r = sqrt(c);
        
        while (l <= r) {
            long long target = l*l + r*r;
            
            if (target == c) return true;
            else if (target < c) l++;
            else r--;
        }
        return false;
    }
};