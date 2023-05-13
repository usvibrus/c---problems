// Count Subarrays With Fixed Bounds
//letcode hard


 long long countSubarrays(vector<int>& nums, int minK, int maxK) {
 
 
 bool minfound=0;
 bool maxfoun==0;

 int minindex =0;
 int maxindex=0;

int startingindexofsubarray=0;

long long ans=0;



 for(int i=0;i<nums.size();i++){


6
if(nums[i]<minK || nums[i]>maxK){

minfound=0;
maxfound=0;
startingindexofsubarray = i+1;

}

if(nums[i]==minK){
minfound=1;
minindex=i;
}

if(nums[i]==maxK){
 maxfound=1;
 minindex=i;
}


ans = ans +( min(minindex,maxindex)- startingindexofsubarray+1);




 }


 return ans;
 
 
 }

 