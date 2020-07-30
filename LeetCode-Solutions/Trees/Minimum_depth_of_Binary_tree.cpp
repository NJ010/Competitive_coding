
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        
        if(root->left==nullptr && root->right==nullptr){
            return 1;
        }
        
        int case1=INT_MAX;
        int case2=INT_MAX;
        
        if(root->left!=nullptr){
        case2=minDepth(root->left);
        }
        if(root->right!=nullptr){
        case1=minDepth(root->right);
        }
        
        return min(case1,case2)+1;
        
    }
};