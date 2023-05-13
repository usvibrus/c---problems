class node
{

public:
    
    int data ;
    node* next;

    node(int val){

    data = val;
    next=NULL;

    }
    



};


void insertattails(node* &head, int val){



node* n = new node (val);

if(head=NULL){

    head=n;
}

node* temp =head;

while(temp->next!=NULL){

temp = temp->next;


}
temp->next = n;
}


void display(node* head){



node* temp = head;

while(temp!=NULL){


    cout<<temp->data;
    temp=temp->next;
}

}

void delete(node* &head,int val){


    node* temp = head;

    while(temp->next->data!=val){
     

temp = temp->next;}
node* todelete = temp->next;
temp->next = temp->next->next;

delete todelete;




}


void deletehead(node* head){

    node* temp = head;
head= head->next;

delete temp;

}



void reverse(node* head){

    node* prev = NULL;
    node* curr = head;
    node* next;


 while(curr!=NULL){

    next = curr>next;

   curr->next = prev;

   prev = curr;
   curr = next;

 }


}


int main (){



    
node* head =NULL;

insertattails(head,1);
insertattails(head,2)


}



1 

t c 
