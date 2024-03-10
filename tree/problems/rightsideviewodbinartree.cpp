//Right side view of a binary tree


//solving useing queue


class Solution {
public:
 vector<int> rightView(Node *root)
    {
        
        
      
        
        queue<Node*>Q;
        Q.push(root);
        int data=0;
        
        vector<int>ans;
        if(root==NULL){
            
            return ans;
        }
        
        while(1){
                                                                                 1
            int size = Q.size();                                                2   3
            if(size==0){                                                       5  9    9
                                                                              9  8 
                return ans;                                                  
            }
            while(size>0){
                
                
               Node* temp = Q.front();
               
               Q.pop();
               
               
               data = (temp->data);
               
               
               if(temp->left!=NULL){
                   
                   Q.push(temp->left);
                   
               }
                
                
                if(temp->right!=NULL){
                    Q.push(temp->right);
                }
                
                size--;
                
            }
            ans.push_back(data);
            
            
            
            
        }
        
        
        
        return ans;
        
       
    }
};








}}