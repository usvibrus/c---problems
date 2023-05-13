// this cis solved by using unordered set

class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {

        unordered_set<int> mp;

        for (int i = 0; i < n; i++)
        {

            mp.insert(a[i]);
        }
        int count = 0;

        for (int i = 0; i < m; i++)
        {

            int key = b[i];

            if (mp.find(key) != mp.end())
            {
                count++;
                mp.erase(key);
            }
        }

        return count;
    }
};