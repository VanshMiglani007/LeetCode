class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>freq;
        while(n>0){
            int rem=n%10;
            n/=10;
            freq[rem]++;
        }
        int sum=0;
        for(auto it:freq){
            sum+=it.first*it.second;
        }
        return sum;
    }
};