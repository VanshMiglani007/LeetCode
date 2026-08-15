class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int strLen = s.size();
        unordered_map<char, vector<int>> mp;
        for(int i = 0; i<strLen; i++){
            mp[s[i]].push_back(i);
        }
        int n = words.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            int idx = -1;
            bool ok = true;
            for(int j = 0; j<words[i].size(); j++){
                auto &ch = words[i][j];
                auto it = upper_bound(mp[ch].begin(), mp[ch].end(), idx);
                if(it == mp[ch].end()){
                    ok = false;
                    break;
                }
                else idx = mp[ch][it - mp[ch].begin()];
            }
            if(ok) count++;
        }
        return count;
    }
};