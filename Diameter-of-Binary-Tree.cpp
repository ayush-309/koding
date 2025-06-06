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
    int calc(TreeNode *root, int &ans){
        if (root==NULL) return 0;
        int lH = calc(root->left, ans);
        int rH = calc(root->right, ans);
        ans = max(ans, lH+rH);
        return 1 + max(lH, rH);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = INT_MIN;
        calc(root, ans);
        return ans;
    }
};