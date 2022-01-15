//Problem Number - 111
//Problem Name - Minimum Depth of Binary Tree


class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        int ld = minDepth(root->left) ;
        int rd = minDepth(root->right );
                          
        if( min(ld,rd) ) return 1 + min(ld,rd);
        
        return 1 + max( ld,rd );
    }
};
