/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#define min(a,b) ((a < b) ? (a) : (b))
int minDepth(struct TreeNode* root) {

    if(!root)
        return 0;
    int left_depth = minDepth(root->left);
    int right_depth = minDepth(root->right);

    if(!root->left && !root->right)
        return 1;

    if(!root->left)
        return 1 + right_depth;
        
    if(!root->right)
        return 1 + left_depth;

    return min(left_depth , right_depth) + 1;
}