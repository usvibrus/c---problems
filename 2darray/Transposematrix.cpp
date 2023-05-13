      
      
      
      
      //for N * M size of arr
      
      
      
      int n=matrix.size();

      int  m=matrix[0].size();

        vector<vector<int>> temp(m,vector<int>(n,0));

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++)

                temp[i][j]=matrix[j][i];
        }

        return temp;
        

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// for n*n i.e rows == col

int n = matrix.size()



for(int i =0;i<n;i++){


    for(int j = 0;j<i;i++){   

swap( matrix[i][j],matrix[j][i]);

    }
}