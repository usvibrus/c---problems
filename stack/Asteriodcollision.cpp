




735. Asteroid Collision

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            //push all positively moving asteroid to stack
            if(v[i]>0) st.push(v[i]);
            else{
                //for negative asteroid check how may asteroid 
                //from stack it can destroy
                while(!st.empty() and st.top()<abs(v[i])) st.pop();

                //case for equal weight asteroid
                if(!st.empty() and st.top()==abs(v[i]))st.pop();

                //if stack becomes empty then there will not be 
                //any asteroid that can destroy current one
                //because it destroyed everything 🔥
                else if(st.empty()) ans.push_back(v[i]); 
            }
        }
        int idx=ans.size();//we need it ahead
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        //elements from stack will be in reverse order.
        //so we need to only reverse the elements coming from stack
        //that's why we kept a variable idx for elements not from stack
        reverse(ans.begin()+idx,ans.end());
        return ans;
    }
};
    
    
    
    
    
    
    
    
   