///(a-b/c)*(a/k-l) // infix expression


int precidence(char c){



if(c=='^'){
    return 3;
}else if(c=='*'  or c=='/'){
    return 2;
}else if(c=='+' or c=='-'){

return 1;

}else{
    return -1; 1
}

}


string infixtopostfix(string s){



string res = "";
stack<char>st;
for(int i=0;i<s.length();i++){

if(s[i]<='z' && s[i]>='a' or s[i]<='Z' &&s[i]>='A'){

res+=s[i];

}else if( s[i]=='('){

st.push(s[i]);
}else if(s[i]==")"){

    while(!st.empty() && s[i]=='('){

        res+=st.top();
        st.pop();
    }

    if(!st.empty()){
        st.pop();
    }



}else{

while(!st.empty() && precidence(st.top()) > precidence(s[i])){
    res+=st.top();
    st.pop();
}

st.push(s[i]);



}

}

while(!st.empty()){

    res+=st.top();
    st.pop();
}

}