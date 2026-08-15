class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i = arr.size() - 1;
        int mx = -1;
        while (i >= 0) {
            int curr = arr[i];
            arr[i] = mx;
            mx = max(mx, curr);
            i--;
        }
        return arr;
    }
};