#include <iostream>
using namespace std;


void merge(int arr[],int l, int mid, int r){

//creattring two temporary arr for storing the sorted arrs 
int n1 = mid-l+1; // size of fisrt arr
int n2 = r-mid; // size of second arr


int a1[n1]; //first arr for storing arr elements upto l to mid 
int a2[n2]; // second arr storign element  fom mid to  the last element i.e r


for(int i=0;i<n1;i++){

    a1[i]  = arr[i+1];//string elements into a1 from l to  mid
}
for(int i=0;i<n2;i++){


    a2[i] = arr[mid+1+i]; //storing sorted elements of arr in a2 i.e from mid+1 to end

    
}

int i=0;
int j=0;
int k=l;





while(i<n1 && j<n2){

if(a1[i]< a2[j]){

    arr[k] = a1[i];
i++;k++;
}else{


    arr[k] = a2[j];
    j++;k++;
}

}





while(i<n1){
     arr[k] = a1[i];
i++;k++;

}

while(j<n2){
     arr[k] = a2[j];
j++;k++;

}

}




void mergesort(int arr[], int l, int r)
{

    if (l < r)
    {

        int mid = (l + r) / 2;

        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
}