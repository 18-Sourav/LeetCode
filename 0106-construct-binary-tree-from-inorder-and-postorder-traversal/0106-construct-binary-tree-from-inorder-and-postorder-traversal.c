/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* build(int* inorder, int instart, int inend, int* postorder, int postStart, int postEnd)
{
    if(instart>inend)
        return NULL;
    
    //Always the last element is the root node
    int rootValue = postorder[postEnd];

    //constructing the root node
    struct TreeNode* root = malloc(sizeof(struct TreeNode));

    root->val = rootValue;
    root->left = NULL;
    root->right  = NULL;

    //finding the rootnode in the inorder
    int rootindex = instart;

    while(inorder[rootindex] != rootValue)
        rootindex++;

    //Number of element in the left sub tree    
    int leftsize = rootindex - instart;


    root->left = build(inorder, instart, rootindex-1, postorder, postStart, postStart + leftsize-1);
    root->right = build(inorder, rootindex+1, inend, postorder, postStart + leftsize, postEnd-1 );

    return root;

} 
struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize) {
    
    return build(inorder, 0, inorderSize-1, postorder, 0, postorderSize -1);
}