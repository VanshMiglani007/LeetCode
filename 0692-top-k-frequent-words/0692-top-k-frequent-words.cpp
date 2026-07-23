class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string, int> mp;

        for (int i = 0; i < words.size(); i++) {
            mp[words[i]]++;
        }

        int maxi;
        while (k--) {
            maxi = -1;
            string best = "";
            for (auto it : mp) {
                if (it.second > maxi) {
                    maxi = it.second;
                    best = it.first;
                } else if (it.second == maxi && it.first < best) {
                    best = it.first;
                }
            }
            ans.push_back(best);
            mp.erase(best);
        }
        return ans;
    }
};