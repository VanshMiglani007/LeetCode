class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
            int l=0;
            string first=strs[0];
            while(l<first.size()){
                char ch=first[l];
                for(int i=0;i<strs.size();i++){
                    if(l>=strs[i].size()||strs[i][l]!=ch){
                        return first.substr(0,l);
                    }
                }
                l++;
            }
    return first;
    }

};