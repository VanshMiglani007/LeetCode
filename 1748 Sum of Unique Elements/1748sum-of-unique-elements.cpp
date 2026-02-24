class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum =0;
        for(int num : nums){
            mp[num]++;
        }

        for(auto& x : mp){
            if(x.second==1)
                sum = sum+x.first;
        }
        return sum;
    }
};