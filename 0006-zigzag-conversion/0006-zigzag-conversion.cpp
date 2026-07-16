class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        string ans="";
        int skip=2*(numRows-1);
        int l=0;
        while(l<s.size()){
            ans+=s[l];
            l+=skip; 
        }
        for(int i=1;i<numRows-1;i++){
            l=i;
            while(l<s.size()){
                ans+=s[l];

                l+=skip-(2*i);
                if(l<s.size()){
                    ans+=s[l];
                }
                l+=2*i;
            }
        }
        l=numRows-1;
        while(l<s.size()){
            ans+=s[l];
            l+=skip;
        }
        return ans;
    }
};