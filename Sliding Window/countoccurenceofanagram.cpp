//count occurrance of anagram  gfg

class Solution{
public:

 bool allzeromarked(vector<int>&counter){
     
     
     for(int &i :counter){
         
         if(i!=0){
             return false;
         }
         
         
     }
     return true;
     
 }

	int search(string pat, string txt) {
	   
	  
	   int size = txt.length();
	   int windowlength = pat.length();
	   
	   vector<int>counter(26,0); // inasializing a vector of of size26 with zero to store ifchar present in window
	   //this is frequency array we can use map also
	   
	   
	   
	   for(int i=0;i<windowlength;i++){
	       
	       char ch= pat[i];
	       counter[ch-'a']++;
	   }
	   
	   
	   int i=0;
	   int j=0;
	   
	   int ans=0;
	   
	   while(j<size){
	       
	       
		   
	       counter[txt[j]-'a']--;
	       if(j-i+1 == windowlength){
	           
	           if((allzeromarked(counter))){
	               ans++;
	           }
	           
	           counter[txt[i]-'a']++;
	           i++;
	       }
	       
	       j++;
	   
	       
	       
	   }


	   return ans;
	   
	   
	}

};