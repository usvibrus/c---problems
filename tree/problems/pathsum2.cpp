//codestortwithMIK
class Solution {

vector<vector<int>>finalres;

    void pathsum(TreeNode* root, int sum ,int targetSum,vector<int>temp){

         if(!root){
            return;
         }

         sum+=root->val;
         temp.push_back(root->val);

         if(root->left==NULL && root->right==NULL){

            if(sum == targetSum){
                    finalres.push_back(temp);
            }

            return;
         }

          pathsum(root->left,sum,targetSum,temp);
          pathsum(root->right,sum,targetSum,temp);

    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
       vector<int>temp;

        int sum = 0;
       pathsum(root,sum,targetSum,temp); 
     return finalres;   

    }
};
