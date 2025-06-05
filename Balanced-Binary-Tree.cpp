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
    int depth(TreeNode *root){
        if (root==NULL) return true;
        int a = depth(root->left);
        int b = depth(root->right);
        return max(a, b) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (root==NULL) return true;
        int l = depth(root->left);
        int r = depth(root->right);
        if (abs(l-r)>1) return false;

        bool a = isBalanced(root->left);
        bool b = isBalanced(root->right);
        return a && b;
    }
};