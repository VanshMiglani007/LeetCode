class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());;
        while(l<r){
            long long sum = 0;
            int mid = l+(r-l)/2;
            for(int pile : piles) {
                sum += (pile + mid - 1) / mid;
            }
            if(sum<=h){
                r=mid;
            }
            else l=mid+1;
        }
        return r;
    }
};