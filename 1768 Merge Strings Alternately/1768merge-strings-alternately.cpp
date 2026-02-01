class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int l = 0;
        int r = 0;
        for(int i = 0;i<min(word1.size(),word2.size());i++){
            s.push_back(word1[l]);
            l++;
            s.push_back(word2[r]);
            r++;
        }
        if(word1.size()>word2.size()){
            while(l<word1.size()){
                s.push_back(word1[l]);
                l++;
            }
        }
        if(word1.size()<word2.size()){
            while(r<word2.size()){
                s.push_back(word2[r]);
                r++;
            }
        }
        return s;
    }
};