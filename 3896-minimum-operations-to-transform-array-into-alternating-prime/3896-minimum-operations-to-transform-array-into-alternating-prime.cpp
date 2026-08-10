class Solution {
public:
    bool isprime(int n){
        if(n<=1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int e=0;
        int o=1;
        int count=0;
        while(e<nums.size()){
            int val=nums[e];
            while(!isprime(val)){
                val++;
                count++;
            }
            nums[e]=val;
            e=e+2;
        }
        while(o<nums.size()){
            int val=nums[o];
            while(isprime(val)){
                val++;
                count++;
            }
            nums[o]=val;
            o=o+2;
        }
        return count;
    }
};