class Solution {
public:
    int minOperations(int n) {
        int count=0;
        int mid=2 * (n / 2) + 1;
        for(int i=0;i<n;i++){
            int curr=2*i+1;
            count+=abs(mid-curr);
        }
        return count/2;
    }
};