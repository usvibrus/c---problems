class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
     vector<int>leftprod(nums.size());
     vector<int>rightprod(nums.size());

     vector<int>ans(nums.size());

   int leftsum=1;
     for(int i=0;i<nums.size();i++){
      leftsum*=nums[i];
        leftprod[i]=leftsum;
     }


    int rightsum=1;
     for(int i=nums.size()-1;i>=0;i--){
     rightsum*=nums[i];

     rightprod[i]=rightsum;
         
     }


     
     for(int i=0;i<nums.size();i++){

       int ele1= i>=1 ? leftprod[i-1] : 1;
       int ele2 = i<nums.size()-1?rightprod[i+1] : 1;

       ans[i]=(ele1*ele2);
         
     }
     return ans;

    }
};