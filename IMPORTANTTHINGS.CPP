
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

 //defining mean heap
       priority_queue<int,vector<int>,greater<int>>minheap;



