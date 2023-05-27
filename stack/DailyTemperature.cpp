// 739. Daily Temperatures

// BRUTE FORCE

// BUY GIVES TLE



class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &tem)
    {

        vector<int> ans;

        for (int i = 0; i < tem.size(); i++)
        {

            int k = i + 1;

            while (k < tem.size())
            {

                if (tem[k] <= tem[i])
                {
                    k++;
                }
                else
                {
                    break;
                }
            }

            if (i == tem.size() - 1 || k > tem.size() - 1)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(abs(k - i));
            }
        }

        return ans;
    }
};





////OPTIMIZED

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &tem)
    {

        int n = tem.size();

        stack<int> st;

        vector<int> ans;

        for (int i = n - 1; i >= 0; i--)
        {

            while (!st.empty() && tem[i] >= tem[st.top()])
            {

                st.pop();
            }

            if (st.empty())
            {

                ans[i] = 0;
            }
            else
            {

                ans[i] = st.top() - i;
            }
        }

        return ans;
    }
};