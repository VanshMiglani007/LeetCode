class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        unordered_map<int,int>mp;
        for (int num : nums){
            mp[num]++;
        }

        vector<int>res;
        for(auto x :mp){
            if(x.second>n/3){
                res.push_back(x.first);
            }
        }
        return res;
    }
};