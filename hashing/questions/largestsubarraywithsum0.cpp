
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   

int maxi =0;
int presum=0;

unordered_map<int,int>mp;

for(int i=0; i<n; i++ ){


   sum+=arr[i];

   if(presum==0){

    maxi=i+1; 
   }



   if(mp.find(presum)!=mp.end()){


      maxi = max(maxi,i-mp[presum]); // cheaking max of current index and last sum index eg 15 13  7   8   15 ==   
                                                                                         0  1   2   3   4    5  the maxi will be  1} i -0 = 2-0 = 2
                                                                                                                                  2} i - 0 = 5-0 =5   which is max 
                                                                                                                                  we are not storing found prevsum again in map 
                                                                                                                                  we are cheaking if present then max of previndext - currindex 
                                                                                                                                  else add to map with their index


   }else{

mp[presum]=i;

   }


}

return maxi;




}