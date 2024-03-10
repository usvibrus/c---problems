//vvvvvvvvvvimp question

       5
    /     \
    4      9
 /   \   /   \
3     7  1    2 

//so level order traversal of this tree will be 5 4 9 3 7 1 2

//so we are returning an 2d vector of travelsals at of each levels eg [[5],[4,9],[3,7],[1,2]]

//we will solve this problem with help of queue

vector<vector<int>> levelOrder(Node* node){

      vector<vector<int>>ans;

      if(node==NULL){
        return ans;
      }

      queue<Node*>q; // we are making queuea Node* typ to to store Node*

      Node* root= node;

      q.push(root);



while(1){

   int size = q.size();

   if(size==0){
    return ans;
   }

      vector<int>li;

      while(!size>0){


        Node* temp = q.front(); // storing the root which was stored inside queue
        q.pop();// poping the stored root Node from queue

  

        li.push_back(temp->val); // string val of node ans pushing it into an vector

        if(temp->left!=NULL){

        q.push(temp->left); // cheking if root left not NULL then pushing the root->left into queue and agian the above process will repeate

        }

        if(temp->right!=NULL){
        q.push(temp->right);cheking if root right not NULL then pushing the root->right into queue and agian the above process will repeate
 
        }
              }

              ans.push_back(li);        
              
              }

      } 
    }


    ///////////////////////////////////////////////////////////GFG SOLUTION when ae are returning the elements in single vactor


    vector<int> levelOrder(Node* node)
    {
      vector<int >ans;
      
      queue<Node*>q;
      
      q.push(node);
      if(node==NULL){
          return ans;
      }
      
      
      while(!q.empty()){
          Node* temp = q.front();
          q.pop();
          ans.push_back(temp->data);
          
          if(temp->left!=NULL){
              q.push(temp->left);
          }
          if(temp->right!=NULL){
              q.push(temp->right);
          }
          
          
      }
      
      return ans;
      
    
    }



    
// NOTE : PREPRDER INORDER POST ORDER IS FORM OF DEPTH FIRST SEARCH TRAVERSAL
// LEVEL ORDER TRAVERSAL IS BREATH FIRST SERACH TRAVERSAL