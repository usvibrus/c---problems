



 //                 rs      re
    //               |      |  
    //          cs -> 1 2 3 0
 //                   4 5 6 9
   //           ce -> 7 8 9 2
   //

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& MAT) {
        


   int n = MAT.size();//nu of rows
   int m = MAT[0].size();//number of columns



   int rs =0;
   int re = m-1;
   int cs = 0;
   int ce= n-1;

vector<int>ans;


   while(rs<=re && cs<=ce){


for(int i=rs;i<=re;i++){

    ans.push_back(MAT[cs][i]);

}
cs++;

for(int i=cs;i<=ce;i++){

    ans.push_back(MAT[i][re]);
}
re--;


  if(( rs<= re and cs <= ce)==false) break;

if(cs<=ce){

for(int i = re;i>=rs;i--){

ans.push_back(MAT[ce][i]);

} ce--;
}
     

if(re<=re){

for(int i=ce;i>=cs;i--){

    ans.push_back(MAT[i][rs]);
}

rs++;
}

   }
   if(n==1){
       return MAT[0];
   }else{
return ans;
   }
    }
};