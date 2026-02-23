class Solution {
public:

    bool canArrange(int n , long long staircases){
        long long neededCoins = staircases*(staircases+1)/2;
        return n>=neededCoins;
    }
       
    int arrangeCoins(int n) {
        int l =1;
        int r = n;
        int ans;
        while(l<=r){
            long long mid = l+(r-l)/2;
            if(canArrange(n, mid)){
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        return ans;
    }
};