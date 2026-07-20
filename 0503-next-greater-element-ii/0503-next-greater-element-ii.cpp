class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n);
        for(int i=2*n-1;i>=0;i--){
            int curr=i%n;
            while(!st.empty()&&st.top()<=nums[curr]){
                st.pop();
            }
            if (st.empty()) ans[curr] =-1;
            else ans[curr]=st.top(); 

            st.push(nums[curr]);
        }
        return ans;
    }
};