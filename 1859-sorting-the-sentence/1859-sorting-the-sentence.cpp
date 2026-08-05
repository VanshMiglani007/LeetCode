class Solution {
public:
    string sortSentence(string s) {
        string chars="";
        vector<string>ans(10);
        for(char c:s){
            if(c==' ') continue;
            else if(isdigit(c)){
                ans[c-'0']=chars;
                chars="";
            }
            else{
                chars+=c;
            }
        }
        string res="";
        for(int i=1;i<10;i++){
            if(!ans[i].empty()){
                if(!res.empty()) res+=" ";
                res+=ans[i];
            }
        }
        return res;
    }
};