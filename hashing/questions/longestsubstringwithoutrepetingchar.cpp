// we have to find longest substring withput repeting charracter



//time complexity o n(2)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
    

    int maxi = INT_MIN; // for stirng lent of substring with maxi char with no repetation

    int n = s.size();

    int i =0;
    int j=0;

    unordered_set<char>mp;

//looping until j<n // size of string 
     
     while(j<n){



      
     while((mp.find(s[j])!=mp.end()){
 

               mp.erase(s[i]);
             i++;


     }


maxi = max(maxi,j-i+1);

      mp.insert(s[j]);
      j++;
     




     }

    
    
    
    
    
    }


return maxi
}



};