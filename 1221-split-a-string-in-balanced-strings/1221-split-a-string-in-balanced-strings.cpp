class Solution {
public:
    int balancedStringSplit(string s) {
        int rcnt=0;
        int lcnt=0;
        int cnt=0;
        for(char c:s){
            if(c=='R'){
                rcnt++;
            }
            if(c=='L'){
                lcnt++;
            }
            if(rcnt==lcnt){
                cnt++;
            }
        }
        return cnt;
    }
};