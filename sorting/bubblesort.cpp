

int n;
cin >> n;

vector<int> arr;

//here in bubble sort we get greatest element in in last position each iteration
for (int i = 0; i < n; i++)
{

    int a;
    cin >> a;

    arr.push_back(a);
}

for (int i = 0; i < n; i++)
{
    for (int j = 1; j < n; j++)
    {

        if (arr[j - 1] > arr[i])
        {

            swap(arr[j - 1], arr[i]);
        }
    }
}





for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
}



















// SELECTOIN SORT
//Selection sort is a simple sorting algorithm that repeatedly finds the minimum element from an unsorted list and moves it to the beginning of the list until all elements are sorted.

for (int i = 0; i < n - 1; i++)
{

    for (j = i + 1; j < n; j++)
    {

        if (arr[j] < arr[i])
        {

            swap();
            int
        }
    }
}