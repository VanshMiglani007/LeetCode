class Solution {
public:
    string smallestPalindrome(string s) {
        string ans="";
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        char mid='\0';
        for(int i=0;i<freq.size();i++){
            while(freq[i]>=2){
                ans+=char('a'+i);
                freq[i]-=2;
            }
            if(freq[i]==1){
                mid=char('a'+i);
            }
        }
        string rev = ans;
        reverse(rev.begin(), rev.end());
        if(mid!='\0'){
            return ans+mid+rev;
        }
        return ans+rev;
    }
};