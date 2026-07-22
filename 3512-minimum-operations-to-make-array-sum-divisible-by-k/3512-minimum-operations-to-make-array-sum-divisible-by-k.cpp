class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum=0;
        int count=0;
        for(int i:nums){
            sum+=i;
        }
        while(sum%k!=0){
            sum--;
            count++;
        }
        return count;
    }
};