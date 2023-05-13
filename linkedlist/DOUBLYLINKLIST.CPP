 
  //WE CAN MOVE IN BOTH DIRECTION IN DOUBLY LINKLIST
  // STRUCTURE OF DOUBLLY LINKLIST    NORMAL LINK LIST CONSIST OF    NODE AND NEXT POINTER 
  //                        INT DOUBLEY LINKLIST  STRUCTURE  PREV -NODE -NEXT   ,, IT ALSO CONSIST OF PREVIOUS POINTER WHICH POINTS TO PREVIPUS NODE


//FISRT NODES PREVIOUS POINTE POINTES TOWARD NULL  AND LAST NODE OF DOUBLY LINKLIST POINT TO NULL              null<-NODE- - -  -- - - - - - - - - >NODE ->NULL



////////////////////IMPLEMENTATION OF DOUBLY LINKLIST //////////////////////////////////////////////////////


class node{


public:

int data;
node* next;
node* prev;


node(int val){

    data=val;
    next=NULL:
    prev=NULL;

}

};

//insert aT HEAD


void insertathead(node* &head,int val){



  node* n = new node(val);

  n ->next = head;
  if(head!=NULL){


  head->prev = n;
  

  }


  head=n;



}





//insert at tail


void insertattails(node* &head,int val){


if(head==NULL){


    insertathead(head,val);
    return;
}


node* n = new node(val);

node* temp = head;

while(temp->next!=NULL){

    temp = temp->next;
}

temp->next = n;

n->prev = temp;//point temp node to prev i.e n node ->prev = temp node



}



//display nodes print nodes

void display(node* head){


    node* temp = head;


    while(temp!=null){


cout<<temp->data<<" ";
temp = temp->next;

    }
}






void delete(node* head){

node* todelete = head;
    head= head->next;
    head->prev = NULL;

}





void delete(node* head,int pos){


//deleting head node

if(pos==1){

    delete(head);
}



node* temp =head;

int counter =1;


while(temp->next!=NULL && counter==pos){



temp = temp->next;

}

if(temp->next!=NULL){

temp->prev->next = temp->next; // edge test case in clase of last node to delete
}


delete temp;

}









int main(){



node head =NULL;

insertattails(head,1);
insertattails(head,2);
insertattails(head,3);
insertattails(head,4);
insertattails(head,4);

insertathead(head,9);
display(head);





}