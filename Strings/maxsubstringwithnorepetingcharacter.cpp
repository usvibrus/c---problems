

// brute froce

class sol(string s)
{

  int n - s.lenght();

  unorderd_set<char> mp;

  int i = 0;
  int j = 0;

  int maxi = INT_MIN;

  while (j < n)
  {

    while (mp.find(s[j]) != mp.end())
    {

      mp.erase(s[i]);
      i++;
    }

    maxi = max(maxi, j - i + 1);
    mp.insert(s[j]);
    j++;
  }
}

return maxi;

0

    ///////////////////optimized

    vector<int>
        v(256, -1);
int j = 0;
int ans = INT_MIN;
for (int i = 0; i < s.length(); i++)
{
  j = max(j, v[s[i]] + 1);

  ans = max(ans, i - j + 1);
  v[s[i]] = i;
}

return ans;