class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>res;
        unordered_map<string,int>mp;

        stringstream ss (s1+" "+s2);
        string word;

        while(ss>>word){
            mp[word]++;
        }

        for(auto &x:mp){
            if(x.second==1){
                res.push_back(x.first);
            }
        }
        return res;
    }
};