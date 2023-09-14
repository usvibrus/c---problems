




1464. Maximum Product of Two Elements in an Array


Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 

Input: nums = [3,4,5,2]
Output: 12 



//using priority_queue  (heap)


class Solution {
public:
    

int maxProduct(vector<int>& nums) {
        
        priority_queue<int>pq;
        for(auto i:nums)
            pq.push(i);
        int first=pq.top();
          pq.pop();
        int second=pq.top();
          pq.pop();
        
        return (first-1)*(second-1);
    }









    //witout heap good sol

    class Solution {
public:
    int maxProduct(vector<int>& nums) {
getting two number first and second and returning thier product 
//
int first =0;
int second=0;

for(int num:nums){

    if(num>first){

        second=first;
        first=num; 
           }else if(num>second){
                second=num;
           }
}


return (first-1)*(second-1);
    }
};