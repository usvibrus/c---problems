
// Complete Binary Tree leetoce
//Complete Binary Tree  gfg



class solution{


   bool (TreeNode* root){



       
      queue<TreeNode*> Q;           //declaring a queue 

      Q.push(root); //    pusing root into queue


    
     
     bool SeenNUllinpast = false;   // this os boolean use to cheak if any node was null in past 


      while(!Q.empty()){

       
          TreeNode* temp = Q.front();

          Q.pop();

          if(temp==NULL){


            SeenNUllinpast = true;




          }else{

            if(SeenNUllinpast==true){
                return false;
            }
           

           Q.push(temp->left);
           Q.push(temp->right);

          }




        



      }


return true;




}

};