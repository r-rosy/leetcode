/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void func(struct TreeNode* node,int* array,int* n)
{
    if(node==NULL)
    {

    }else {
        array[*n]=node->val;
        *n=*n+1;
        func(node->left,array,n);
        func(node->right,array,n);
    }
}
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int* array=malloc(sizeof(int)*10000);
    int num=0;
    int* n=&num;
    func(root,array,n);
    *returnSize=*n;
    return array;



}