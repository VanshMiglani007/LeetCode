class Solution {
public:
    int titleToNumber(string columnTitle) {
        int x=0;
        for(char c : columnTitle){
            x=x*26 + (c-'A'+1);
        }
        return x;
    }
};