
// leetcode valid stack sequence
// gfg stack permutaion
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        


stack<int>st;
int m = pushed.size();
int i=0;
int j=0;

while( i<m && j<m){

    st.push(pushed[i]);

    while(!st.empty() && st.top()==popped[j] & j<m){

        st.pop();j++;
    }


i++;


}

return st.empty();

    }
};