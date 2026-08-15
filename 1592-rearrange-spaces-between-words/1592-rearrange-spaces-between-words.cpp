class Solution {
public:
    string reorderSpaces(string text) {
        int space =0;
        for(char c:text){
            if(c==' ') space++;
        }
        vector<string>words;
        string word="";
        for (char c : text) {
            if (c != ' ') {
                word += c;
            } else {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            }
        }
        if(!word.empty()){
            words.push_back(word);
        }
        if (words.size() == 1) {
            return words[0] + string(space, ' ');
        }
        int gap=space/(words.size()-1);
        int extra=space%(words.size()-1);
        string ans="";
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(i<words.size()-1){
                ans+=string(gap,' ');
            }
        }
        ans+=string(extra,' ');
        return ans;
    }
};