class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int mysum=0;
        // int alicesum=0;
        // int bobsum=0;
        int l=0;
        int r=piles.size()-1;
        int k=1;
        int turns=piles.size()/3;
        while(turns>0){
            // alicesum+=piles[l];
            mysum+=piles[k];
            // bobsum+=piles[r];
            l=l+2;
            k=k+2;
            r--;
            turns--;
        }
        return mysum;
    }
};