class Solution {
public:
    int product(int x){
        int mul=1;
        while(x>0){
            int rem=x%10;
            x/=10;
            mul*=rem;
        }
        return mul;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(product(n)%t==0){
                return n;
            }
            n++;
        }

    }
};