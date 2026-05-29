class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        for(int i = 0;i<nums.size();i++){
            int x = nums[i];
            while(x>0){
                int y = x%10;
                x=x/10;
                ans[i] += y;
            }
        }
        int mini = *min_element(ans.begin(),ans.end());
        return mini;
    }
};