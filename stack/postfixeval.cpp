
int postfixeval(string s){



 stack<int>st;


 for(int i=0;i<s.size();i++){

 
 if(s[i]<='9' && s[i]>='0'){


    st.push(s[i]-'0');



 }else{


    int second = st.top();
    st.pop();
    int first = st.top();
    st.pop();

 switch (s[i])
 {
 case '+':
    st.push(first+second);
    break;
  case '/':
  st.push(first/second);
  break;

  case '*':
  st.push(first*second);
  break;

  case '^':
   st.push(pow(first,second));  
 
 default:
    break;
 }

 }

 }

 return st.top();



}












int main(){

   
   int n;
   cin>>n;
   int arr[n];

for(int i=0;i<n;i++){
    
    cin>>arr[i];

}








}