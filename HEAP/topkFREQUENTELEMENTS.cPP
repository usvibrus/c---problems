347. Top K Frequent Elements

    Input : nums = [ 1, 1, 1, 2, 2, 3 ],
            k = 2 Output : [ 1, 2 ]

                           MIN HEAP = STORES IN ACENDING ORDER
                               MAX HEAP = STORES IN DECONDING ORDER

                           class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> mp;

        for (int &it : nums)
        {
            mp[it]++;
        }

        // defining mean heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;

        // PUSH elements in min heap
        // size of qeue sould not greater than k

        for (auto it : mp)
        {

            int val = it.first;
            int freq = it.second;

            minheap.push({freq, val});

            if (minheap.size() > k)
            {

                minheap.pop();
            }
        }

        vector<int> ans;

        while (!minheap.empty())
        {

            ans.push_back(minheap.top().second);
            minheap.pop();
        }

        return ans;
    }
};

=====================================================
//more optimized

//using bucket sork best solution it will need in most of your future problems so must learn it thoroly



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
       
       int n = nums.size();
       unordered_map<int,int>mp;

       for(int &it :nums){
           mp[it]++;
       }




       

     // in this arr the index will represent the frequiency of the elements

    vector<vector<int>>bucket(n+1);
    //index = freq
    //values = elements
    //bucket[i] = elements having i frequency
     
     for(auto &it:mp){

         int element = it.first;
         int freq  =it.second;

         bucket[freq].push_back(element);
        
     }






   //loops the bucket from the end as the maximum index will store the elements which occur i times 
vector<int>ans;

     for(int i=n;i>=0;i--){

         if(bucket[i].size()==0){continue;}

         while(bucket[i].size()>0 && k>0){

             ans.push_back(bucket[i].back());
             bucket[i].pop_back();
             k--;
         }
     }


 return ans;

    }
};