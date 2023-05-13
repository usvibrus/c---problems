
//brute force solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> res;
        set <vector<int>> uset; //   unordered_set <vector<int>> uset -> wont compile 
        sort(nums.begin(),nums.end());

        if(nums.size() == 0 || nums.size() < 3) return {}; // return empty vector

        for(int i = 0 ; i < nums.size()-2 ; i++) {

            for(int j = i+1 ; j < nums.size()-1 ; j++) {

                for(int k = j+1 ; k < nums.size() ; k++) {

                    if(nums[i]+nums[j]+nums[k]==0) {
                        
                    res.push_back(nums[i]);
                    res.push_back(nums[j]);
                    res.push_back(nums[k]);
                    uset.insert(res);  //set helps in keeping only the unique triplets
                    res.clear();
                    }
                } 
            }
        }
        vector<vector<int>> ans(uset.begin(),uset.end());
        return ans; 
    }
};

/////optimal