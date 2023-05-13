// 111. Minimum Depth of Binary Tree leetcode


class Solution {
public:
    int minDepth(TreeNode* root) {
    
     if(!root){
        return;
     }


     int leftdepth = minDepth(root->left);
     int rightdepth = minDepth(root->right);


     if(leftdepth == 0 || rightdepth==0){

        return 1 +(leftdepth+rightdepth);
     }else{

     return 1+ min(leftdepth,rightdepth);

     }
    
    
    }