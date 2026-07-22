class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<int>st;
        for(char c:s){
            st.insert(c);
        }
        return st.size();
    }
};