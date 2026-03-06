class Solution {
public:
    bool checkOnesSegment(string s) {
        int l =0;
        while(l<s.size()){
            if(s[l]=='1'){
                l++;
            }
            else if(s[l]=='0'){
                if(s[l+1]=='1'){
                    return false;
                }
                else{
                    l++;
                }
            }
        }
        return true;
    }
};