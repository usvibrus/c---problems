#inclue <>
using namespace std;


void swap(int arr[],int i,int j){
    
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;







}


int pivot(int arr[],int l,int r){



    int pivot = arr[r]; // last element
    int i = l-1; 


    for(int j=l;j<r;j++){

        if(arr[j]< pivot){

                  i++;
            swap(arr,i,j);

        }
        
        }
        
        
        swap(arr,i+1,r)
        }
    



void  quicksort(int arr , int l,int r){


if(l<r){


int pi = partation(arr,l,r);


quicksort(arr,l.pi-1);
quicksort(arr,pi+1,r);

}


}




int main(){


int size = 6;
quicksort(arr,0,5); // remember to send index properly

}