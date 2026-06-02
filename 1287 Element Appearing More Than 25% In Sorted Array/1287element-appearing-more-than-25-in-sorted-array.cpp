class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int x = n/4;
        for(int i =0;i<n;i++){
            if(i+x<n&&arr[i]==arr[i+x]){
                return arr[i];
            }
        }
        return -1;
    }
};