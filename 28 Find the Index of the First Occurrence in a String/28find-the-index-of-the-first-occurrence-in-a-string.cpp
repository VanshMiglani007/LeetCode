class Solution {
public:
    int strStr(string haystack, string needle) {

        if(haystack.size()<needle.size()) return -1;

        for (int r=0;r<=haystack.size()-needle.size();r++)
        {
        int l=0;

            while(l<needle.size() && haystack[r+l]==needle[l])
            {
                l++;
            }

            if(l==needle.size())
            {
                return r;
            }
        }
            return -1;
    }
};