class Solution {
public:
    long long gcdSum(vector<int>& nums){
        long long sum=0;
        vector<int>prefixgcd;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            prefixgcd.push_back(std::gcd(nums[i],mx));
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        int l=0;
        int r=prefixgcd.size()-1;
        while(l<r){
            if(l==r) break;
            sum+=std::gcd(prefixgcd[l],prefixgcd[r]);
            l++;
            r--;
        }
        return sum;
    }
};