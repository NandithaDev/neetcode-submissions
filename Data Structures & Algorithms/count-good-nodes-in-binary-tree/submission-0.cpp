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
    int dfs(TreeNode* current, int maxSoFar){
        if(current==nullptr){
            return 0;
        }
        int isgood=0;
        if(current->val>=maxSoFar){
            maxSoFar=current->val;
            isgood=1;
        }
        int left=dfs(current->left,maxSoFar);
        int right=dfs(current->right,maxSoFar);
        
        return isgood+left+right;
    }
public:
    int goodNodes(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        
        
        return dfs(root,INT_MIN);
        
    }
};
