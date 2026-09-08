class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int ans=0;
        long long k=n-999;
        if(n<=999) return 0;
        while(n>0){
            int rem=n%10;
            count++;
            n/=10;
            if(count==3) ans++;
        }
        ans*=k;
        return ans;
    }
};