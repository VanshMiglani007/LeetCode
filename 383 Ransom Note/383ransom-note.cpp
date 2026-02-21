class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;
        vector<int>freq(26,0);
        for(char c : magazine){
            freq[c-'a']++;
        }

        for(char x : ransomNote){
            if(freq[x-'a']>0) freq[x-'a']--;
            else return false;
        }
        return true;
    }
};