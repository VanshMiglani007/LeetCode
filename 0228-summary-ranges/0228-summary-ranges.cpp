class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        vector<string>ans;
        for(int i=0;i<n;i++){
            if(i==n-1||nums[i]!=nums[i+1]-1){
                if(l==i){
                    ans.push_back(to_string(nums[l]));
                    l++;
                }
                else{
                    ans.push_back(to_string(nums[l])+"->"+to_string(nums[i]));
                    l=i+1;
                }
            }
        }
        return ans;
    }
};