class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2) return true;
        int l =1;
        int r = num/2;
        while(l<=r){
            long mid = l+(r-l)/2;
            long sq = mid * mid;
            if(sq == num) return true;
            else if(sq>num) r= mid-1;
            else l = mid+1;
        }
        return false;
    }
};