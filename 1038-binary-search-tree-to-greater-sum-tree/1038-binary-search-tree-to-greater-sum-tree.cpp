/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> arr;
    void inorder(TreeNode* root) {
        if (!root)
            return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    void loop() {
        for (int i = arr.size() - 2; i >= 0; i--) {
            arr[i] = arr[i] + arr[i + 1];
        }
    }
    int i = 0;
    void solved(TreeNode* root) {
        if (!root)
            return;
        solved(root->left);
        root->val = arr[i];
        i++;
        solved(root->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        inorder(root);
        loop();
        solved(root);
        return root;
    }
};