class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans = "";
        char x;
        for (char c : num) {
            while (k > 0 && !st.empty() && st.top() > c) {
                st.pop();
                k--;
            }
            st.push(c);
        }
        while (k > 0) {
            st.pop();
            k--;
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        while (ans.size() > 1 && ans[0] == '0')
            ans.erase(0, 1);
        if(ans.empty()) return "0";
        else return ans;
    }
};