class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        int n=responses.size();
        unordered_map<string,int>mp;
        for(auto &day:responses) {
            unordered_set<string>st;
            for(auto &word : day) {
                st.insert(word);
            }
            for(auto &word:st){
                mp[word]++;
            }
        }
        string ans="";
        int maxi=0;
        for(auto it:mp){
            if(it.second>maxi||(it.second==maxi&&it.first<ans)){
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};