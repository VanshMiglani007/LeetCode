class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";

        for(string word:words){
            long long total =0;

            for(char c:word){
                total+=weights[c-'a'];
            }

            int mod=total%26;
            ans.push_back('z'-mod);
        }
        return ans;
    }
};