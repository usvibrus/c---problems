

///SEARCH IN SORTED 2D ARRAY 



 bool search(vector<vector<int>> matrix, int n, int m, int x) {
       
       
       int row  = 0;
       int col = m-1;
     
       bool is present =false;


       while(row<n && col>=0){





                if(matrix[row][col] == x){
                    ispresent=true;
                    break;
                }


                if(matrix[row][col]>x){
                 
                 col--;
                }else{

                    row++;
                }


       }


       if(ispresent){
        retrun 1;
       }else{
        return 0;
       }
       
      

      



                
            } 
            
            