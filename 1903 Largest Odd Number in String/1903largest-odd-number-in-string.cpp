class Solution {
public:
    string largestOddNumber(string num) {
        int r=num.size()-1;

        if((num[r]-'0')%2!=0) return num;

        while(r>=0){
            if((num[r]-'0')%2!=0) break;
            r--;
        }
        if(r==-1) return "";
        string ans="";
        for(int i=0;i<=r;i++){
            ans+=num[i];
        }
        return ans;
    }
};