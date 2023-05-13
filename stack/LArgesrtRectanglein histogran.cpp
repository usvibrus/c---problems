
//BRRUTE FORCE
class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {

// 2 1 5 6 2 3
//
    int maxarea =0;

    for(int i=0;i<n;i++){

        int minheight =INT_MAX;
        for(int j=i;j<n;j++){

   minheight  = min(minheight,arr[j]);
   maxarea = max(maxarea,minheight*(j-i+1));

        }
    }


    }}



    ///////////////////obrute 2

    	public int largestRectangleArea(int[] heights) {
        int area=0, n=heights.length;
        for(int i=0;i<n;i++) {
            int l=i, r=i;
            while(l>=0&&heights[l]>=heights[i]) l--;
            while(r<n&&heights[r]>=heights[i]) r++;
            area=Math.max(area,(r-l-1)*heights[i]);
        }
        return area;        
    }\



    ///optimals 