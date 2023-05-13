//due to limitation of memeory or waste of memory we useing linkist implementatioon of stCK

class node{

public://always remember to add public otherwise the default  memebers wiill be private

 int data;
 node* next;

 node(int val){
    data =val'
    next = NULL;
 }
};


class queue {

 node* front;
    node*  back;

  public:

    

queue(){

front=NULL;
back=NULL;

}

void Push (int val){

node * n = new node(val);

if(front==NULL){
    front=n;
    back=n;
}

back->next = n;
back=n;


}


void pop(){


if(Front ==NULL){

   return << "Stack underflow";

}

Node* todelete = front;
front = front->next;

delete todelete;


}


void empty(){

   if(front==NULL){
      return true;
   }else{
      return false;
   }
}


void peek(){

   if(front==NULL){
      cout<<"sTACK IS EMPTY";
      return;
   }
   cout<<front->data;
   return ;
}

 


};


int main(){



   queue q;
   q.Push(1);
   q.Push(2);
   q.Push(5);
   q.Push(7);

   q.pop();

   q.peek();

   q.empty();
}

