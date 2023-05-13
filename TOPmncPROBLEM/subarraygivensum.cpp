// find total number of subarr whole sum == k

#include <bits/stdc++.h>

using napespace std.;

int main()
{

    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; i < n; j++)
        {

            sum += arr[j];

            if (sum == k)
            {
                count++;
            }
        }
    }

    return count;
}

/////////////////////////////OPTIMIZED


int nums.size();


int count = 0;

unordered_map<int ,int> prevsum;

int sum=0;


for(int i=0;i<n;i++){


sum+=nums[i];

if(sum==k)count++;

if(prevsum.find(sum-k) != prevsum.end()){

    count+=prevsum[sum-k];
}

prevsum[sum]++;


}

return count;
