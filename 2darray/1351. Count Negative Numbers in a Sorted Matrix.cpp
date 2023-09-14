// 1351. Count Negative Numbers in a Sorted Matrix

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {

        int i = 0;
        int n = grid.size() - 1;
        int m = grid[0].size() - 1;
        int j = grid[0].size() - 1;

        int c = 0;
        while (j >= 0 && i <= n)
        {

            if (grid[i][j] < 0)
            {

                c++;
                if (j == 0)
                {
                    i++;
                    j = m;
                    continue;
                }
                j--;
            }
            else
            {
                j = m;
                i++;
            }
        }

        return c;
    }
};