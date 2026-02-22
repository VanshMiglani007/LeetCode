class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;

        bool active=true;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%2!=0){
                active = !active;
            }
            if((i+1)%6==0){
                active = !active;
            }
            if(active){
                p1 += nums[i];
            }
            else{
                p2 += nums[i];
            }
        }
        return p1-p2;
    }
};