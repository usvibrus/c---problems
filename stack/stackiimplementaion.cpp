#include "bits/stdc++.h"
#define n 100



class stack{


int * arr;
int top;



public:

stack(){

 arr = new int[n];
 top = -1;
}



void push (int val){

  if(top==n-1){cout<<"stack overflow";return;}
  
  top++;
ARR[top]= val;

}

void pop(){

 
   if(top==-1){cout<<"stack is empty";return; }
top--; 

}



void Top(){

 if(top==-1){cout<<"no elements in stack"return;}

    cout<<arr[top];
}


bool empty(){

if(top==-1){
    return true;
}else{
    return false;
}


}
};













int main(){



stack st;

st.push(1);
st.push(2)
st.push(3)
st.push(4)



}

