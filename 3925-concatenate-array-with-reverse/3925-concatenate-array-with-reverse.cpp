class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp=nums;
        vector<int>ans;
        reverse(temp.begin(),temp.end());
        for(int i:nums){
            ans.push_back(i);
        }
        for(int i:temp){
            ans.push_back(i);
        }
        return ans;
    }
};