



class Solution {
public:
    string customSortString(string order, string s) {
        
             map<char,int>mp;
            for(auto it:s){


             mp[it]++;

            }

            string ans="";



            for(auto it:order){
              
               if(mp.find(it)!=mp.end()){

              auto temp = mp.find(it);
               int count = temp->second;



                 string ss(count,it);// REMEMBER THIS THIS MEANS PUSHING STRING IT COUNT TIMES    eg string(3,p);  that will equal to  " string = ppp" , it will push p 3 times in string
                 ans+=ss;
                 
                   mp.erase(it);

                   
                }                
                         




            for(auto it:mp){

              string ss (it.second,it.first);// REMEMBER THIS THIS MEANS PUSHING STRING IT COUNT TIMES    eg string(3,p);  that will equal to  " string = ppp" , it will push p 3 times in string
               ans+=ss;

            }


             return ans;






    }
};





