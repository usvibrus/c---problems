

class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &arr, int n)
    {
        // this is rotate 2 d array not rotate image //

        // in this problem we first take transposse of martix ans

        for (int i = 0; i < n; i++)
        {

            reverse(arr[i].begin(), arr[i].end());
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < i; j++)
            {

                swap(arr[i][j], arr[j][i]);
            }
        }
    }
};