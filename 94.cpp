class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        travel(root,answer);
        return answer;
    }
    
    void travel(TreeNode* root,vector<int>& answer)
    {
        if(!root)
        {
            return;
        }
        travel(root->left,answer);
        answer.push_back(root->val);
        travel(root->right,answer);
    }
};