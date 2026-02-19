class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0) return false;
        int x = log2(n);
        if (n == 1)
            return true;
        else if (n > 1)
            return n == pow(2,x);
        else
            return false;
    }
};