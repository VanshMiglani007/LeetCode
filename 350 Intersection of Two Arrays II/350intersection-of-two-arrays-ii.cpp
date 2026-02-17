class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort (nums1.begin(),nums1.end());
        sort (nums2.begin(),nums2.end());
        int l = 0;
        int r = 0;
        vector<int>res;
        while(l<nums1.size()&&r<nums2.size()){
            if(nums1[l]>nums2[r]){
                r++;
            }
            else if(nums1[l]<nums2[r]){
                l++;
            }
            else{
                res.push_back(nums1[l]);
                l++;
                r++;
            }
        }
        return res;
    }
};