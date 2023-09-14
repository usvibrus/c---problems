//rOTATRE 2D ARRRYS 90 DEG

1 2 3
4 5 6 
7 8 9

TO 

7 4 1
8 5 2
9 6 3

// SO FIRST BRUTE FORCE APPROACH WILL BE TO CREATE SECOND 2D ARRAY and replace rows by columns
// but this has high complexity o (n2)  +  o(n2) 



//optimised approach will be 
//1} we will transpose the given matrix
//2} Transpose matix means replace col by rows and rows by columns
//3} after that reverse the rows we will REVERSE TEH ROWS WE WILL GET THE ROTATED ARRAY


class ROTATAEIMAGE
{

public:




void rotate(vector<vector<int>>&  m){


int n = m.size;




//transpose matrix             for this to work  //num of rows must be equal to number of columns 

for(int i=0;i<n;i++){
for(int j=0;i<i;i++){
swap(m[i][j],  m[j][i]);
}}


//revsing rowws of transpose matrix
for(int i=0;i<n;i++){

reverse(m[i].begin(),m[i].end());

}



}

};


///////////////More robust solution works with nx n and mxn /////////////////////////

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
          int n=matrix.size();

           int  m=matrix[0].size();

        vector<vector<int>> temp(m,vector<int>(n,0));

//making transpose of matrix changing columns by rows rows by columns
        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++)


                temp[i][j]=matrix[j][i];
        }

        return temp;
        


        for(int i=0;i<n;i++){

//reversing every row of matirix;
reverse(m[i].begin(),m[i].end());

}
        
        return matrix;
    }
}