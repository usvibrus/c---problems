
===================================================================
//multiset<int> numbers;   THIS STORES ELEMENT IN SORTED 

int main() 
    std::multiset<int> numbers;

    numbers.insert(5);
    numbers.insert(2);
    numbers.insert(8);
    numbers.insert(3);
    numbers.insert(1);

    // Iterate over the elements in sorted order
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

//OUTPUT  1 2 3 5 8
}


==============================================================================================================================================

multimap

//MULTIMAP

//Sort Characters By Frequency leetcode


class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        multimap<int,char,greater<int>>mul;// multimap sort in desending order for this we dont have to take the loop fort this.
        string s1 = "";
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }

        for(auto it:mp)
        {
            mul.insert({it.second,it.first});
        }

        for(auto it:mul)
        {
              int d = it.first;
              auto p = it.second;
               string po(d,p);

               s1+=po;
            
        }
        return s1;
    }
};



====================================================================================================================================

min heap == stores elements in acending order


 //defining mean heap // stores from small to greater acending order
       priority_queue<int,vector<int>,greater<int>>minheap;



/// Maxx heap 
//stores in decending order / / greter to small


   priority_queue <int> maxh; 
   
    

    
===========================================================================================================================================



//making 2d vector of certian size 

int n =9;
vector<vector<int>>MP (n, vector<int>(n,-1)); // iniatialinzing 2d vector of  size n strong element -1

=========================================================

//initialize string of a size with stroed element 

int count =8
char it =p
 string ss(count,it) // this ss will store 8 char  it i.e pppppppp

 ====================================================================

 vector<int>v(count,temp); // this means vector<int>v(2,5); create a vector v and push 5 2 times ie 5 5

===============



char - '0' // char will get converted  into intger 

============