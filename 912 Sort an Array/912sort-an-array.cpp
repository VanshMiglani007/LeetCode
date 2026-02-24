class Solution {
public:

    int partition(vector<int>& nums,int low,int high){
        int pivot = nums[low];
        int l = low-1;
        int r = high +1;

        while(true){
            do{l++;} while(nums[l]<pivot);
            
            do{r--;} while(nums[r]>pivot);

            if(l>=r){
                return r;
            }
            swap(nums[l],nums[r]);
        }
    }

    void quicksort(vector<int>& nums,int low,int high){
        if(low<high){
            int p =partition(nums,low,high);

            quicksort(nums,low,p);
            quicksort(nums,p+1,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums,0,nums.size()-1);
        return nums;
    }
};