


class Solution {

    
    public:
    
    
    int maxArea(vector<int>& height){



    int n = height.size();

   int s=0;
   int e - n-1;


   int area ;
   int maxarea=0;


   while(s<e){


   area = min(height[e],height[s])*(e-s);

   if(area>maxarea){

maxarea = area;

   }
     



     if(min(height[e],height[s])==height[s]){
        s++;
     }else{
        e--;

     }




   }


return maxarea;

    }}