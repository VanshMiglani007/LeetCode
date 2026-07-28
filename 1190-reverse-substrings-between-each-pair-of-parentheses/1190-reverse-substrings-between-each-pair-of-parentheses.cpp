class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(char c:s){
            if(c==')'){
                string rev="";
                while(!st.empty()&&st.top()!='('){
                    rev+=st.top();
                    st.pop();
                }
                st.pop();
                for(char ch:rev){
                    st.push(ch);
                }
            }
            else st.push(c);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};