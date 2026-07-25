class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n>0){
            int rem=n%10;
            n/=10;
            arr.push_back(rem);
        }
        int maxi=*max_element(arr.begin(),arr.end());
        auto it = find(arr.begin(), arr.end(), maxi);
        arr.erase(it);
        int maxi2=*max_element(arr.begin(),arr.end());
        return maxi*maxi2;
    }
};