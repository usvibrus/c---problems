//DDFGHJHH
//DFGHJ



string removeduplicate(string s){

if(s.length()==0){

return " ";


}
char ch = s[0];//D

string ans = removeduplicate(s.substr(1));//

if (ans==ch) 
{
    return ans;
}

return (ch+ans);




}
 int main()
{
    
}
