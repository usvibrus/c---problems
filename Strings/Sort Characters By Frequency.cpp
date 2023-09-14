
//multiset<int> numbers;  USE TO STORE ELEMENTS in SORTEDD ORDER

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