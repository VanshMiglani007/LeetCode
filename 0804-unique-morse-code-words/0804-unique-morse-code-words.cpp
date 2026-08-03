class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>arr={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>st;
        for(string s:words){
            string ans="";
            for (char c:s){
                ans+=arr[c-'a'];
            }
            st.insert(ans);
        }
        return st.size();
    }
};