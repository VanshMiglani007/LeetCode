class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)
            return "0";
        string res;
        if (num > 0) {
            while (num > 0) {
                int rem = num % 7;
                res = to_string(rem) + res;
                num = num / 7;
            }
        } else {
            int n = abs(num);
            while (n > 0) {
                int rem = n % 7;
                res = to_string(rem) + res;
                n = n / 7;
            }
            res = '-' + res;
        }
        return res;
    }
};