/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;

    int lfdepth = maxDepth(root->left);
    int rtdepth = maxDepth(root->right);

    return (lfdepth>rtdepth? lfdepth : rtdepth )+1;    
}