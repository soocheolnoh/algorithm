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
    void switchTree(TreeNode* root) {
        if (!root) return;
        switchTree(root->left);
        switchTree(root->right);
        swap(root->left, root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        switchTree(root);
        return root;
    }
};
