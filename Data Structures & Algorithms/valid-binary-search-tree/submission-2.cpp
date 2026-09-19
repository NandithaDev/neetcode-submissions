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
    bool check(TreeNode* root, long long minVal, long long maxVal){
        if(root==nullptr){
            return true;
        }
        if(root->val<=minVal || root->val>=maxVal){
            return false;}

    
        bool l= check(root->left,minVal,root->val);
        
        
        bool r= check(root->right,root->val,maxVal);
        
        


        return l&&r;

    }
public:
    bool isValidBST(TreeNode* root) {
        int minVal=INT_MIN;
        int maxVal=INT_MAX;

        return check(root, LLONG_MIN, LLONG_MAX);
        
    }
};
