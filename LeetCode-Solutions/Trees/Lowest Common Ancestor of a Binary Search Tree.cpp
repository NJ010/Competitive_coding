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
        
        if(root==nullptr){
            return nullptr;
        }
        int a=p->val;
        int b=q->val;
        int t=root->val;
              
        if(t>b && t>a){
            return lowestCommonAncestor(root->left, p, q);
        }
        else if(t<a && t<b){
                return lowestCommonAncestor(root->right, p, q);
        }
        else{
            return root;
            }
    }
};