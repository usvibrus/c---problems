
//// Product of Array Except Self

// brute force

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {

            int sum = 1;

            for (int j = 0; j < nums.size(); j++)
            {

                if (i != j)
                {
                    sum *= nums[j];
                }
            }

            ans.push_back(sum);
        }

        return ans;
    }
};


//////optimized 


