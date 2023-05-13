
2405. Optimal Partition of String 
imp

Input: s = "abacaba"
Output: 4
Explanation:
Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
It can be shown that 4 is the minimum number of substrings needed.




class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int g=1;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                g++;
                st.clear();
                st.insert(s[i]);
            }
            else {
                st.insert(s[i]);
            }
        }
        return g;
    }
};