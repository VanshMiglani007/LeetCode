class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string ans="";
        long long sum=0;
        for(char c:s){
            if(c=='0'){
                continue;
            }
            else{
                ans+=c;
            }
        }
        if(ans=="") return 0;
        int x=stoi(ans);
        int temp=x;
        while(x>0){
            int rem = x%10;
            x=x/10;
            sum+=rem;
        }
        return temp*sum;
    }
};