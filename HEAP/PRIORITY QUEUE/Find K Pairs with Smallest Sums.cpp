373. Find K Pairs with Smallest Sums
Medium

Companies
You are given two integer arrays nums1 and nums2 sorted in ascending order and an integer k.

Define a pair (u, v) which consists of one element from the first array and one element from the second array.

Return the k pairs (u1, v1), (u2, v2), ..., (uk, vk) with the smallest sums.

 

Example 1:

Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
Output: [[1,2],[1,4],[1,6]]
Explanation: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]
Example 2:




class Solution {
public:
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

int n= nums1.size();

int n2 = nums2.size();

vector<vector<int>> ans;

priority_queue<pair<int,pair<int,int>>>pq;


for(int i=0;i<n;i++){

for(int j=0;i<n2;j++){

int sum =nums[i]+nums[j];



if(p.size()<k){

    pq.push({sum,{nums[i],nums[j]}});
}
else if(sum<pq.top().first){

       pq.pop();

       pq.push({sum,{nums[i],nums[j]}});

}else if(sum>pq.top().first){
    break;
}




}

}

 while (!pq.empty()) {

        ans.push_back({pq.top().second.first, pq.top().second.second});
        
        pq.pop();
    }







}