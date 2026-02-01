class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i = 0;i<operations.size();i++){
            if(operations[i]=="+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                int sum = first + second;
                st.push(first);
                st.push(sum);
            }
            else if(operations[i]=="D"){
                int l = st.top();
                int sum2 = l + l;
                st.push(sum2);
            }
            else if(operations[i]=="C") {
                st.pop();
            }
            else st.push(stoi(operations[i]));
        }
        int total = 0;
        while(!st.empty()){
            total+=st.top();
            st.pop();
        }
        return total;
    }
};