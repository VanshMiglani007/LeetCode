class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int s=original.size();
        int idx = 0;
        vector<vector<int>> v(m, vector<int>(n));
        if(m*n!=s) return {};
        else {
            for (int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    v[i][j]=original[idx];
                    idx++;
                }
            }
        }
        return v;
    }
};