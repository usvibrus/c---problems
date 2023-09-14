.Generate Parentheses
    Medium

        Companies Facebook 16 Amazon 15 Microsoft 13 Apple 9 Adobe 4 Google 4 Bloomberg 3 Uber 3 C3 IoT 3 Walmart Global Tech 3 Oracle 3 ByteDance 2 Tesla

    
    Given n pairs of parentheses,


    write a function to generate all combinations of well - formed parentheses.

    Example 1 :

    Input : n = 3 Output : [ "((()))", "(()())", "(())()", "()(())", "()()()" ]




// NOTE : Watch COde with alisha video for under standing https://youtu.be/WW1rYrR3tTI


      class Solution {
public:



    void parenthesisGenerator(vector<string>&ans , int n,int open , int close , string currstr){


       //base case

        if(currstr.length()== n*2){
            ans.push_back(currstr);
            return;
        }
      

        
        if(open<n){

            parenthesisGenerator(ans,open+1,close,currstr+"(");

        }

        if(open<close){ 

            parenthesisGenerator(ans,open,close+1,currstr+=")");

        }




    }

       



     vector<string> generateParenthesis(int n) {


       vector<string>ans;

       parenthesisGenerator(ans,n,0,0,"");

       return ans;


     
     }
     
     
     
     
     
     
     
     
     
     
     
     
     }

