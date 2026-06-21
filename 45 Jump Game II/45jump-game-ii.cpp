class Solution {
public:
    int jump(vector<int>& nums) {
        int reach=0;
        int count=0;
        int currend=0;
        for(int i=0;i<nums.size()-1;i++){
            if(i>reach) return -1;
            
            reach=max(reach,i+nums[i]);
            if(i==currend){
                count++;
                currend=reach;
            }
        }
        return count;
    }
};