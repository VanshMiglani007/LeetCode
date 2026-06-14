class Solution {
public:
    string findValidPair(string s) {
        vector<int>cnt(10,0);

        for(char c:s){
            cnt[c-'0']++;
        }
        for(int i=0;i<s.size()-1;i++){
            int a=s[i]-'0';
            int b=s[i+1]-'0';

            if(a!=b&&cnt[a]==a&&cnt[b]==b){
                string ans="";
                ans+=s[i];
                ans+=s[i+1];
                return ans;
            }
        }
        return ""; 
    }
};