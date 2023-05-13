//leetcode  209. Minimum Size Subarray Sum
//Given an array of positive integers nums and a positive integer target, return the minimal length of a 
//subarray
 //whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.


class Solution {

public:

    int minSubArrayLen(int target, vector<int>& nums){

        int i=0;
        int j=0;

        int minlen =INT_MAX;

        int sum=0;


        while(j<nums.size()){

             sum+= nums[j];
         

        while(sum>=target){

         minlen = min(minlen,j-i+1);
        sum-=nums[i];
         i++;
      }

      j++;
        }
        return minlen == INT_MAX ? 0 : minlen ;
        
    }
};