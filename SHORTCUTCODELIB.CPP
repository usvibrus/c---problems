// @uthor: dhruv2185
#include <bits/stdc++.h>
#define gcj "Case #"
#define adj_list vector<vi>
#define endl "\n"
#define spc " "
#define INF_INT 2e9
#define INF_LL 2e18
#define matmax 25
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define pi pair<int, int>
#define pip pair<int, pi>
#define pl pair<ll, ll>
#define plp pair<ll, pl>
#define vi vector<int>
#define vl vector<ll>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define ins insert
#define lb lower_bound // First element NOT LESS than val
#define ub upper_bound // First element GREATER than val
#define sz(q) (int)(q.size())
using namespace std;
typedef long long int ll;
typedef long int li;
#define ook order_of_key  // Number of elements STRICTLY smaller than X
#define fbo find_by_order //  *ITERATOR* pointing to the kth element (0 order)
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i >= b; --i)
#define jfo(a, b) for (auto j = a; j < b; ++j)
#define njfo(a, b) for (auto j = a; j >= b; --j)
#define tt    \
    ll t;     \
    cin >> t; \
    while (t--)
int main()
{
    fastio
        tt
    {
        ll n;
        cin >> n;
        ll arr[n];
        fo(0, n)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (n == 2)
        {
            if (arr[0] == arr[1])
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        unordered_set<ll> s;
        fo(0, n)
        {
            s.insert(arr[i]);
        }
        fo(1, n)
        {
            arr[i] ^= arr[i - 1];
            arr[i - 1] = 0;
        }

        if (s.size() == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        ll x = n;
        fo(0, n)
        {
            if (arr[i] != 0)
            {
                x--;
            }
        }
        if (x == n)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (x == n - 1)
        {
            if ((x % 2 == 1))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}