lass Solution{
  public:
  
    int atoi(string str) {
      int s=0;
        int q=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='-' || str[i]=='+'){
                q++;
                if(q>1)
                return -1;
                if(s>0)
                return -1;
            }
            else if((str[i]-'0')>9){
                return -1;
            }
            else{
                s=10*s+str[i]-'0';
            }
        }
        if(q==0)
        return s;
        else
        return -s;


        }
    
};