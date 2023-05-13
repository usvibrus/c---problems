#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void solve(){

vector<int> nums(4);
        for(int i=0;i<4;i++){ 
            
            cin>>nums[i];
            
            
            }
        sort(nums.begin(),nums.end());

  int pp =0;

  if(p>1){

    p++;

  }
        int anse = 0;

        for(int i=0;i<3;i++) {anse+=nums[i];
       
       
        }
        int res = nums[3];
        if(anse<res){
            

            
       if(p>1){

      p++;
    
        }
             cout<<"YES"<<endl;
             }
        else{
             cout<<"NO"<<endl;
             
             }



}

int main() {
    int y;
    cin>>y;
    while(y--){

solve();

        
    }
 // your code goes here
 return 0;
}