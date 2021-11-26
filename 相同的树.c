/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void func(struct TreeNode* node,int* array,int* n)
{
    if(node==NULL)
    {
    }else {
        if(node->left==NULL&&node->right==NULL)
        {
            func(node->left,array,n);
        array[*n]=node->val;
        *n=*n+1;
        func(node->right,array,n);
        }else {
        if(node->left==NULL)
        {
        func(node->left,array,n);
        array[*n]=-9999;
        *n=*n+1;
        array[*n]=node->val;
        *n=*n+1;
        func(node->right,array,n);
        }
         if(node->right==NULL)
        {
        func(node->left,array,n);
        array[*n]=node->val;
        *n=*n+1;
        func(node->right,array,n);
        array[*n]=-9999;
        *n=*n+1;
        }
        if(node->right==NULL)
        {
        func(node->left,array,n);
        array[*n]=node->val;
        *n=*n+1;
        func(node->right,array,n);
        array[*n]=-9999;
        *n=*n+1;
        }
        if(node->left!=NULL&&node->right!=NULL)
        {
        func(node->left,array,n);
        array[*n]=node->val;
        *n=*n+1;
        func(node->right,array,n);
        }
        }
    }
}
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    int* arr1=malloc(sizeof(int)*10000);
    int* arr2=malloc(sizeof(int)*10000);
    int num1=0;
    int* n1=&num1;
    int num2=0;
    int* n2=&num2;
    func(p,arr1,n1);
    func(q,arr2,n2);
    if(num1!=num2)
    {
        return false;
    }
    for(int i=0;i<=num1-1;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return false;
        }
    }
    return true;
}