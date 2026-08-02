class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        string curr = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                arr.push_back(curr);
                curr = "";
            } else
                curr += s[i];
        }
        arr.push_back(curr);
        if (pattern.size() != arr.size())
            return false;
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        for (int i = 0; i < arr.size(); i++) {
            if (mp1.count(pattern[i]) && mp1[pattern[i]] != arr[i])
                return false;
            if (mp2.count(arr[i]) && mp2[arr[i]] != pattern[i])
                return false;
            mp1[pattern[i]] = arr[i];
            mp2[arr[i]] = pattern[i];
        }
        return true;
    }
};