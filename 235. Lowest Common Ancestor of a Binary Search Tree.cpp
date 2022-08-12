/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
   
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q){
            return root;
        }
        else if(root->val<max(p->val,q->val) && root->val >min(q->val,p->val)){
            return root;
        }
        else if(root->val<q->val && root->val<p->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        else if(root->val>q->val && root->val>p->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        return NULL;
    }
};
