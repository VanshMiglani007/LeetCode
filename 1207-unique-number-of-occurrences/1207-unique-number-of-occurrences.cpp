class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        unordered_set<int>st;
        for(int x:arr){
            freq[x]++;
        }
        for(auto it:freq){
            if(!st.contains(it.second)){
                st.insert(it.second);
            }
            else{
                return false;
            }
        }
        return true;
    }
};