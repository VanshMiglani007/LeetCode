class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        vector<int>freq(121,0);
        int count=0;
        for(int i:ages){
            freq[i]++;
        }
        for(int i=1;i<121;i++){
            if(freq[i]==0) continue;
            for(int j=1;j<121;j++){
                if(freq[j]==0) continue;
                if(j <= 0.5 *i + 7) continue;
                if(j >i) continue;
                if(j>100&&i<100) continue;

                count += freq[i] * freq[j];
                if(i==j) count-=freq[i];
            }
        }
        return count;
    }
};