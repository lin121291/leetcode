class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int answer=1;
        height(root,&answer);
        if(answer)
        {
            return true;
        }
        return false;
    }
    
    int height(TreeNode *tree,int *a)
    {
        if(!tree)
        {
            return 0;
        }
        int L=height(tree->left,a);
        int R=height(tree->right,a);
        if(*a==1)
        {
            *a=L-R>-2 && L-R<2?1:0;
        }
        return 1+max(R,L);
    }
};