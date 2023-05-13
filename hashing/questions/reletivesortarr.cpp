// lettcode reletive sort arr
//gfg Sort an array according to the other




class Solution{
    public:
    
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        
        vector<int>ans;
        
        map<int,int>mp; // this is an ordered map
        
        
        for(auto x:A1){//this shorthand loop is simlar to for(int i=0;i<A1.size;i++) and here A[i] = directly x 
                       // try to use it as many time as posible      
            mp[x]++;
        }
        
        
        for(auto temp:A2){
            
            if(mp.find(temp)!=mp.end()){
                
                
                auto X = mp.find(temp);
                
                int count= X->second;
                
                vector<int>v(count,temp); // this means vector<int>v(2,5); create a vector v and push 5 2 times ie 5 5
            
                ans.insert(ans.end(),v.begin(),v.end());//this means form ending element of ans vector push all elements of vector v
            
                mp.erase(temp);// erasing temp at last we can only push rempaming ele of map 
            }
            
        }
        
        
        
        for(auto x:mp){
            
            int ele = x.first;
            int count = x.second;
            
            vector<int>v(count,ele); // simlarly as above creating temporary vector storning ele as many time as count
            
            ans.insert(ans.end(),v.begin(),v.end()); // similary push all elements of vector v to ans , staring from last ele of ans
        }
        
        return ans;
    } 
};

 // THIS SOL CONTAINS MANY SGORT HANDS REMEMBER ALL OF THAT