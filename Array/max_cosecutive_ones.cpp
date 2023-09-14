// 1004. Max Consecutive Ones III

// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

Input : nums = [ 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0 ], k = 2
   Output : 6 Explanation : [1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1]

        

 class Solution
{
public:
    int longestOnes(vector<int> & nums, int k)
    {

        // we need to find maximun subarray with at most k zeros

        int n = nums.size();

        int zerocount = 0;
        int j = 0;
        int anscount = 0;
        for (int i = 0; i < n; i++){

          
            if (nums[i] == 0)
            {
                zerocount++;
            }

            while (zerocount > k)
            {

                if (nums[j] == 0)
                {
                    zerocount--;
                }

                j++;
            }

            anscount = max(anscount, i - j + 1);
        }

        return anscount;
    }
};