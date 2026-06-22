class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>arr(26,0);
        vector<int>arr2(26,0);
        int cnt=0;
        for(char c:s) arr[c-'a']++;
        for(char c:target) arr2[c-'a']++;

        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr2[i]>0) ans=min(ans,arr[i]/arr2[i]);
        }
        return ans;
    }
};