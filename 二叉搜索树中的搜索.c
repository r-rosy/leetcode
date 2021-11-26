/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */ void search(struct TreeNode* root,struct TreeNode** tree, int val){
    if(root==NULL)
    {

    }else{
    if(root->val==val)
    {
        *tree=root;
    }else {
        search(root->left,tree,val);
        search(root->right,tree,val);
    }
    }
}
struct TreeNode* searchBST(struct TreeNode* root, int val){
    struct TreeNode* tree=NULL;
    search(root,&tree,val);
    return tree;
}