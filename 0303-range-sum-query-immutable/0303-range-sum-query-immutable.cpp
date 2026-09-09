class NumArray {
public:
    vector<int> array;
    NumArray(vector<int>& nums) {
        array=nums;
    }
    
    int sumRange(int left, int right) {
        int answer = 0;
        for(int i = left; i <= right; i++){
            answer+=array[i];
        }
        return answer;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */