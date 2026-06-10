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
    TreeNode*temp;
    void helper(TreeNode*node){
        if(!node) return;

        helper(node->left);
        node->left=nullptr;

        temp->right=node;
        temp=node;

        helper(node->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode*dummy=new TreeNode(0);
        temp=dummy;
        helper(root);

        return dummy->right;
    }
};