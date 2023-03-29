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
    int c=0;
    pair<int,int> dfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        pair<int,int> left=dfs(root->left);
        pair<int,int> right=dfs(root->right);

        int sum=root->val+left.first+right.first;
        int d=1+left.second+right.second;

        if(floor(sum/d)==root->val)
        {
            c++;
        }
        return {sum,d};
    }
    int averageOfSubtree(TreeNode* root) 
    {
        dfs(root);
        return c;
    }
};
