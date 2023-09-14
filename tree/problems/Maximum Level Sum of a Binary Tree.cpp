class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        
            
            queue <TreeNode*>q;

            q.push(root);


            int ans =1;
            int sum=root->val;


               int level=1;

            while(1){

                  int size = q.size();
                  
                  if(size==0){
                      return ans;
                  }
                  int temp = 0;

                  while(size!=0){

            
                 TreeNode* data = q.front();

                 q.pop();

                    temp =  temp+data->val;

                      if(data->left!=NULL){

                          q.push(data->left);
                      }

                      if(data->right!=NULL){
                          q.push(data->right);
                      }
                      
                     size--;

                  }


                  if(temp>sum){
                      sum=temp;
                      ans=level;
                  }
                  level++;



            }


                return ans;
    }
};