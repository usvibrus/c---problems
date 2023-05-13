int n;
cin>>n;


int reverse =0;

while(n>0){

int lastdigi = n/10;

reverse = reverse *10 +lastdigit;

n = n/10;


}

cout<<reverse<<endl;