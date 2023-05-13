//in given subarray return the fisrt most occuering element in arr
// eg
//  1 5 3 4 3 5 6
// ans = 5 / first repeted found 

int n;
//input and arr
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


//make an arr of size 1e6+2 and store -1 values in it
int N = 1e6+2;
int idx[N];
for (int i = 0; i < N; i++)
{
 idx[i] = -1;   
}

int miniindex = INT_MAX;
for(int i=0;i<n;i++){

if(idx[arr[i]] !=-1){

    miniindex = min(minindex,idx[arr[i]]);
}else{
    idx[a[i]] =i;
}

}