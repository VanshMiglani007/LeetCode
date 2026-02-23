class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> res;

        for (int num : arr) {
            if (res.count(num * 2) || (num % 2 == 0 && res.count(num / 2))) {
                return true;
            }
            res.insert(num);
        }
        return false;
    }
};