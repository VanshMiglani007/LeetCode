class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>st;
        vector<int>ans;
        for(int x:friends){
            st.insert(x);
        }
        for(int y:order){
            if(st.find(y)!=st.end()){
                ans.push_back(y);
            }
        }
        return ans;
    }
};