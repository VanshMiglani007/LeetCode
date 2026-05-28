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

    void preOrder(TreeNode *root, vector<int>& ll){
        if(!root) return;
        ll.push_back(root->val);
        preOrder(root->left, ll);
        preOrder(root->right, ll);
    }
    
    void flatten(TreeNode* root) {
        if (!root) return;
        vector<int>ll;   
        preOrder(root, ll);

        TreeNode* temp = root;
        for(int i = 1; i<ll.size();i++){
            temp->left=nullptr;
            temp->right = new TreeNode(ll[i]);

            temp = temp->right;
        }
    }
};