class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int l=0;
        int r=nums.size()-1;
        int k=nums.size()-1;
        while(l<=r){
            int sqr1 = nums[l]*nums[l];
            int sqr2 = nums[r]*nums[r];

            if(sqr1>sqr2){
                result[k]=sqr1;
                l++;
            }
            else{
                result[k]= sqr2;
                r--;
            }
            k--;

        }
        return result;
    }
};