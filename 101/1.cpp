class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {
        TreeNode *p=root->left;//分成兩棵樹
        TreeNode *q=root->right;
        if(compare(p,q))
        {
            return true;
        }
        return false;
    }
    
    
    bool compare(TreeNode *a,TreeNode *b)
    {
        if(!a || !b)
        {
            return a==b;
        }
        return a->val==b->val && compare(a->left,b->right) && compare(a->right,b->left);//左中右  右中左
    }
};