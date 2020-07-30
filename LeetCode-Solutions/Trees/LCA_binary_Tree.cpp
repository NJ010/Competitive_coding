/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class update {
    public:
    bool p;
    bool q;
    TreeNode* lca;
    
    update(){
        lca=NULL;
        p=0;
        q=0;
    }
};
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        update ans;
        ans =findLCA(root,p,q);
        return ans.lca;
    }
    update findLCA(TreeNode* root, TreeNode* p, TreeNode* q){
        update isPossible; 
        if(root==NULL){
            return isPossible;
        }
        update pright=findLCA(root->right,p,q);
        update pleft=findLCA(root->left,p,q);
        
        if( pright.lca!=NULL){
            return pright;
        }
        if(pleft.lca!=NULL){
            return pleft;
        }
        
        
        
        if(root==p){
            isPossible.p=true;
        }
        if(root==q){
            isPossible.q=true;
        }
        
       
        
        if(pright.p==true ||pleft.p==true){
            isPossible.p=true;
        }
        if(pright.q==true ||pleft.q==true){
            isPossible.q=true;
        }
        
        
         if(isPossible.p==true && isPossible.q==true){
            isPossible.lca=root;
        }
        
        
        return isPossible;
        
        
        
        
    }
};