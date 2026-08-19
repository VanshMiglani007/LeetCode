class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }

        int n1=nums1.size();
        int n2=nums2.size();

        int l = 0;
        int r = n1;

        while(l<=r){
            int cut1 = (l+r)/2;
            int cut2 = (n1+n2+1)/2-cut1;

            int l1,r1,l2,r2;

            //nums1
            if(cut1==0){
                l1=INT_MIN;
            }
            else{
                l1=nums1[cut1-1];
            }

            //nums2
            if(cut2==0){
                l2=INT_MIN;
            }
            else{
                l2=nums2[cut2-1];
            }

            //nums1
            if(cut1==n1){
                r1=INT_MAX;
            }
            else{
                r1=nums1[cut1];
            }

            //nums2
            if(cut2==n2){
                r2=INT_MAX;
            }
            else{
                r2=nums2[cut2];
            }

            if(l1<=r2&&l2<=r1){
                if((n1+n2)%2==0){
                    return(max(l1,l2)+min(r1,r2))/2.0;
                }
                else{
                    return max(l1,l2);
                }
            }
            else if(l1>r2){
                r = cut1-1;
            }
            else{
                l=cut1+1;
            }
        }

        return 0;
    }
};