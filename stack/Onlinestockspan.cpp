// 901. Online Stock Span

//momotonoic stack == this is concpt in which the stack becomes in acending order at the end




class Solution{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
      
      vector<int>ans;
      
      
           stack<pair<int,int>>st;
    
    
           for(int i=0;i<n;i++){
               
                      int span =1;
               while(!st.empty() && st.top().first <= price[i]){
                   
                    span+=st.top().second;
                    st.pop();
                    
                   
               }
               
               
               st.push({price[i],span});
               
               ans.push_back(span);
               
               
           }
           
           return ans;
      
      
      
    }
};

