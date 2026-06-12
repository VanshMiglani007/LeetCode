class Solution {
public:

    void helper(vector<vector<char>>& nums,int i,int j){
        int m=nums.size();
        int n=nums[0].size();
        if(i<0||j<0||i>=m||j>=n||nums[i][j]=='0') return;
        
        nums[i][j]='0';

        helper(nums,i+1,j);
        helper(nums,i-1,j);
        helper(nums,i,j+1);
        helper(nums,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int count =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1') {
                    count++;
                    helper(grid,i,j);
                }
            }
        }
        return count;
    }
};