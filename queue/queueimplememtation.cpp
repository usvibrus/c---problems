#include <bits/stdc++.h>
#define n 100
using namespace std;


class queue {


  int * arr;
  int front;
  int back'

  public:


  queue(){
  
   arr = new int[n];
           front =-1;
           back=-1;

  }




 void enqueue(int val){


   if(back == n-1){
    
    cout<<"queue is full"<<cout;
    return;
    
    }
   
   back++;
    arr[back]=val;


   if(front ==-1 ){

    front++;     
   }
 }




void dequeue (){


if(front > back or front ==-1){
    cout<<"queue is empty"
    return;
}


front++;


}


void peek (){

if(front ==-q or front>back){
    cout<<"no element in queue";return;
    }


    return arr[front];
    }



bool empty ()
{

    if(front == -1 or front>back)
{return true;}

return false;
}

};





int main(){



   queue Q;
   Q.enq


}

