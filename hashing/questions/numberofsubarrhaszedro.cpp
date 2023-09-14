class Solution
{
public:
        long long zeroFilledSubarray(vector<int> &nums)
        {

                unordered_map<int, int> mp;
                long long c = 0;
                long long presum = 0;
                bool ispresentzero = false;

                for (int i = 0; i < nums.size(); i++)
                {

                        nums[i] = abs(nums[i] + 0);

                        if (nums[i] == 0)
                        {
                                ispresentzero = true;
                        }
                        presum += nums[i];
                        if (presum == 0)
                        {

                                c++;
                        }
                        if (mp.find(presum) != mp.end())
                        {

                                c += mp[presum];
                        }

                        mp[presum]++;
                }

                if (ispresentzero)
                        return c;

                return 0;
        }
};