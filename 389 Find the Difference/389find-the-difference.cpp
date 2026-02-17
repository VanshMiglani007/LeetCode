class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;
        for(char c : t) sum1+=c;
        for(char c : s) sum2+=c;
        int sum = sum1-sum2;
        return sum;
    }
};