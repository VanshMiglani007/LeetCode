class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int l =0;
        int r =0;
        int a = aliceSizes.size();
        int b = bobSizes.size();
        int sum1 = 0;
        int sum2 = 0;
        while(l<a){
            sum1+=aliceSizes[l];
            l++;
        }
        while(r<b){
            sum2+=bobSizes[r];
            r++;
        }
        int diff = (sum2-sum1)/2;
        unordered_set<int> st(bobSizes.begin(),bobSizes.end());
        for(auto x : aliceSizes){
            if(st.count(x+diff)){
                return{x,x+diff};
            }
        }
        return {};
    }
};