class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int l=0;
        for(int x:pushed){
            st.push(x);

            while(!st.empty()&&st.top()==popped[l]) {
                st.pop();
                l++;
            }
        }
        return st.empty();
    }
};