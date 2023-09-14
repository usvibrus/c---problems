

// TABULATON APPROACH   Bottom up approache -

class Solution
{

public:
    int tribonacci(int n)
    {

        if (n == 0)
        {
            return 0;
        }

        if (n == 1)
        {
            return 1;
        }

        if (n == 2)
        {
            return 1;
        }

        vector<int> dp(n + 1);

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }

        return dp[n];
    }
};






// TOP DOWN APPROACH - RECURRSION + MEMOIZATION

class Solution
{

    int f(int n, vector<int> &dp)
    {

        if (n == 0)
        {
            return 0;
        }

        if (n == 1 || n == 2)
        {

            return 1;
        }

        if (dp[n] != -1)
        {
            return dp[n];
        }

        return dp[n] = f(n - 1, dp) + f(n - 2, dp) + f(n - 3, dp);
    }

public:
    int tribonacci(int n)
    {

        vector<int> dp(n + 1, -1);

        return f(n, dp);
    }
};




/// SPACE OPTIMIZATION



class Solution
{

    int f(int n, vector<int> &dp)
    {



    int prev1=0;
    int prev2 =1;
    int prev


    }