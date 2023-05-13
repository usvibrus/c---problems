class Solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {

            mp[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            int key = arr[i];

            auto temp = mp.find(key);

            if (temp->second == 1)
            {
                return key;
            }
        }

        return 0;
    }
};