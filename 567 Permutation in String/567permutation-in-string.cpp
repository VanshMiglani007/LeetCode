class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>cnt1(26,0);
        vector<int>cnt2(26,0);
        if(s1.size()>s2.size()) return false;    
        for (char c : s1){
            cnt1[c - 'a']++;
        }
        for(int i = 0;i<s1.size();i++){
            cnt2[s2[i] - 'a']++;
        }
        if(cnt1==cnt2) return true;

        for(int j = s1.size();j<s2.size();j++){
            cnt2[s2[j]-'a']++;
            cnt2[s2[j-s1.size()]-'a']--;

            if(cnt1 == cnt2) return true;
        }
        return false;
    }
};