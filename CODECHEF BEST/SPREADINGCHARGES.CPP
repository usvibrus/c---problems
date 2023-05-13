// CODECHEF PROBLEM

#include <bits/stdc++.h>

using namespace std;

void uday2()
{
}

void uday()
{

    int k;
    cin >> k;
    string uday;

    cin >> uday;
    vector<int> mp;

    int coinyer = 0;
    for (int i = 0; i < k; i++)
    {
     if (uday[i] != '0')
        {

            mp.push_back(i);
        }
    }

    if (mp.size() == 0)
    {
      cout << k << endl;
      return;
    }

    if (mp.size() == 1)
    {
     cout << 0 << endl;
     return;
    }

    long long op, opp;

    for (int i = 0; i < mp.size() - 1; i++)
    {

        if (uday[mp[i]] != uday[mp[i + 1]])
        {

            int lp = mp[i + 1] - mp[i] - 1;

            if (lp % 2 != 0)
            {

                coinyer++;
            }
        }
    }

    cout << coinyer << endl;
}

int main()
{

    int m;
    cin >> m;

    while (m--)
    {

        vector<int> ml;
        uday();
    }
}