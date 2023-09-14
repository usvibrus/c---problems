



//by flooyad warshaal algo
 // hare or tortoise algo for cycle detection and removal

 //cycle detection

 node* slow = head;
 node* fast = head;

 while(fast!=NULL && fast->next!=NULL){

    slow = slow->next;
    fast = fast->next->next;

    if(slow==fast){
        return true;
    }
 }


 ////////////////////////////cycle detection and removal/////////////////////

 node* slow = head;
 node* fast = head;

 while(fast!=NULL && fast->next!=NULL){


SLOW = SLOW->NEXT;
FAST = FAST->NEXT->NEXT;

IF(SLOW==FAST){
    
    break;

}



 }


  
  // mow when cycle is detected 
  // point fast pointer to head;
  // then after move fast and slow pointer by one step 

fast = head;

while(slow->next != fast->next){


    slow =slow->next;
    fast = fast->next;
}

slow->next =NULL;