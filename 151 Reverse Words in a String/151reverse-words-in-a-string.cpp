class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int r=s.size()-1;
        while(r>=0){

            while(r>=0&&s[r]==' ') r--;
            if(r<0) break;
            string temp="";
            while(r>=0&&s[r]!=' '){
                temp=s[r]+temp;
                r--;
            }
            if(!ans.empty())
                ans+=" ";
            ans+=temp;
        }
        return ans;
    }
};