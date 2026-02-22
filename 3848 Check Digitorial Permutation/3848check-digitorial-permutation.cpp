class Solution {
public:

    long long fact(int n){
        if(n==0||n==1) return 1;
        return n*fact(n-1);
    }
    bool isDigitorialPermutation(int n) {
        long sum =0;
        string original = to_string(n);
        if(n==0) sum =1;
        while(n>0){
            long rem = n%10;
            n=n/10;
            long x = fact(rem);
            sum += x;
        }
        string s = to_string(sum);
        sort(original.begin(),original.end());
        sort(s.begin(),s.end());
        
        return original==s;
    }
};