
//brute force solution
vector<int>l; // contains arr ele

leader=true;

vector<int>ans;
for(int i = 0;i<l.size();i++){




    for(intj=i+1;j<n;j++){

if(l[j]>l[i]){

    leader=false;
}


if(leader==true){
    ans.push_back(l[i])
}
    }
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//optimized



class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
      
      vector<int>ans;
      int maxi = INT_MIN;
      
      for(int i=n-1;i>=0;i--){
          if(a[i]>=maxi){
              
              ans.push_back(a[i]);
              
          }
          
          maxi= max(maxi,a[i]);
          
      }

reverse(ans.begin(),ans.end());
  
      return ans;
      
      