class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        long long sum = 0;
        for(int i = 0; ;i++){
            sum+=i;
            if(sum==target){
                return i;
            }
            else if (sum>target&&(sum-target)%2==0){
                return i;
            }
        }
        return -1;
    }
};