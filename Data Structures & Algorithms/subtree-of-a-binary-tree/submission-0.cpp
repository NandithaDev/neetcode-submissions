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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==nullptr && q!=nullptr || p!=nullptr && q==nullptr){
            return false;
        }
        if(p==nullptr && q==nullptr){
            return true;
        }
        if(p->val!=q->val){
            return false;
        }
        bool l=isSameTree(p->left,q->left);
        
        bool r=isSameTree(p->right,q->right);
        

        return (l && r);



    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(root==nullptr){
            return false;
        }
        
    
        if(isSameTree(root,subRoot)==true){
            return true;
            }
        else{
            bool l_node=isSubtree(root->left,subRoot);
            bool r_node=isSubtree(root->right,subRoot);
        
            return l_node || r_node;
            }
        
        }
        

        
};
