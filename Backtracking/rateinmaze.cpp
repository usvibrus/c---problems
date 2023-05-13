#include<bits/stdc++.h>
using namespace std;






/*

1 0 1 0 1 
1 1 1 1 1
0(1) 0 1 0   (1) is condition where we need to backtrack i.e here we canot move forward or down 
1 0 0 1 1
1 1 1 0 1

*/



// this bool function cheaks next block is 0 or 1 . if 1 then it is safe to go to that block 

bool issafe(int** arr,int x,int y,int){


if( x<n && y<n && arr[x][y]==1){

return true;

}

return false;




}





bool rateinmaze(int** arr,int x,int y,int n,int** ans){


   if(x==n-1 && y == n-1){ //THIS IS BASE CASE that means we are at final block s o we mark ans[x][y]=1

    ans[x][y]=1;
    return true;
    


   }


    if(issafe(arr,x,y,n)){


        ans[x][y]=1;   


        if(rateinmaze(arr,x+1,y,n,ans)){//this recursievly cheak if down block is safe to travel
                                       // if yes the return true;
            return true;            

        } 

        if(rateinmaze(arr,x,y+1,n,ans)){// this cheaking next block is 1 or not if yes return treu


      return true;
           
        }

      // {NOTE : IF BOTH THE ABOVE RECURSIVE RAT FUNCTION RETURN  FALSE THAT MEANS WE CANOT GO FORWORD OR DOWNWORD 
      //    THAT MEANS WE NEED TO BACKTRACK  AND SET THE ANS[X][Y] =0 i.e  we cant got that path   }


      ans[x][y] = 0;
      return false;
      




    }

    return false;




}


int main(){


    int n;
    cin>>n;


    int** arr = new int* [n];
    for(int i=0;i<n;i++){

        arr[i] = new int[n];
    }//declaration of dynamic arr 2d arr


for(int i=0;i<n;i++){

    for(int i=0;j<n;j++){

cin>>arr[i][j];
    }
}//taking input




//similarly declaring ans arr of storing path to reach destination

int ** ans = new int*[n];

    for(int i=0;i<n;i++){

        ans[i] = new int[n];

    for(int j=0;j<n;j++){

ans[i][j]=0;//amrking all elements of ans arr as 0
   
    }
    }




if(rateinmaze(arr,0,0,n,ans)){


for(int i=0;i<n;i++){

    for(int i=0;j<n;j++){


cour<<ans[i][j];
    }
}//

}









}