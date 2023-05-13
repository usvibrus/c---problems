
class Solution{
    public:
    
    int isSumProperty(Node *root)
    {
      
      //base case
      
      
      if(root==NULL || (root->right == NULL && root->left==NULL)){
          return 1;
      }
     
    int leftsum=0;
    int rightsum=0;
    
    if(root->left!=NULL){
        
        leftsum = root->left->data;
        
    }
    
    if(root->right!=NULL){
        
        
        rightsum=root->right->data;
        
    }
    
    if((root->data==leftsum+rightsum) &&  isSumProperty(root->left) && isSumProperty(root->right)){
        
        return 1;
    }else{
        return 0;
    }
    
    
    
    
        



    }