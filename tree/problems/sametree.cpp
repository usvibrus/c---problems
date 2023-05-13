//determine two tree are identical or not
// using only inorder traveersal we canot say two tree are same we must perform two traversal to conclude two tree are same or not


//optimized sol

class Solution {




public:
    bool isSameTree(TreeNode* p, TreeNode* q) {


        if(p==NULL && q==NULL){return true;}


        if( p==NULL && q!=NULL ||  q==NULL && p!=NULL){
            return false;
        }

        if(p->val != q->val){
            return false;
        }

        bool leftval = isSameTree(p->left,q->left);

        bool rightval = isSameTree(p->right,q->right);

 
        return (leftval&&rightval);


        
        
    }
};