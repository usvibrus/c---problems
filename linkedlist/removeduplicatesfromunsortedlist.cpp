


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {


   
   unordered_set<int>mp;
   
   Node* temp = head;
   if(temp==NULL){
       return head;
       
   }else{
       mp.insert(temp->data);
   }
   
   
   while(temp!=NULL && temp->next!=NULL){
       
       if(mp.find(temp->next->data)!=mp.end()){
           
           temp->next = temp->next->next;
       }else{
           mp.insert(temp->next->data);
           temp= temp->next;
           
       }
   }
   
   return head;
   
   
   

    }
};