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
    bool check(TreeNode *p, TreeNode *q){
        if (p==NULL && q==NULL) return true;
        if (p==NULL) return false;
        if (q==NULL) return false;
        if (p->val != q->val) return false;
        bool a = check(p->left, q->right);
        bool b = check(p->right, q->left);
        return a && b;
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};