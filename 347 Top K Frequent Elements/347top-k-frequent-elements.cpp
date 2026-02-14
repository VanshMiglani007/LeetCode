class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size() +1);

        for(auto& it : mp){
            int num = it.first;
            int freq = it.second;
            bucket[freq].push_back(num);
        }

        vector<int> res;
        for(int i = bucket.size()-1;i>=0 && res.size()<k;i--){
            for(int num : bucket[i])
            {
                res.push_back(num);
            }
        }
        return res;
    }
};