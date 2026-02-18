class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0;
        int r=0;
        while(r<t.size()){
            if(l<s.size()&&s[l]==t[r]) {
                l++;
            }
            r++;
        }
        return l==s.size();
    }
};