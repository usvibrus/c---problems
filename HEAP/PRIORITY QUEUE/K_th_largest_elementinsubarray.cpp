class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        
        
        
        priority_queue<int,vector<int>,greater<int>>Q;
        
        
        
        for(int i=0;i<N;i++){
            
            int sum=0;
            
            for(int j=i;j<N;j++){
                
                sum+=Arr[j];
                 
            Q.push(sum);
            if(Q.size()>K){
              Q.pop();  
                
            }
                
            }
           
            
        }
        
        return Q.top();
 
          
        
    }
};