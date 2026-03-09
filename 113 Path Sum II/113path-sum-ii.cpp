/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void sumFxn(TreeNode* root, int targetSum,vector<int>&cs, vector<vector<int>>&res){
        if(!root) return;

        cs.push_back(root->val);

        if(!root->left&&!root->right&&targetSum==root->val){
            res.push_back(cs);
        }

        sumFxn(root->left,targetSum-root->val,cs,res);
        sumFxn(root->right,targetSum-root->val,cs,res);

        cs.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>cs;
        vector<vector<int>>res;
        sumFxn(root,targetSum,cs,res);
        return res;
    }
};