class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(char c:s){
            if(c=='('){
                st.push(0);
            }
            else{
                int x = st.top();
                st.pop();

                int add;
                if(x==0){
                    add=1;
                }
                else{
                    add=2*x;
                }
                st.top()+=add;
            }
        }
        return st.top();
    }
};