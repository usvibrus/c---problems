

unordered_set<int>mp;

int presum=0;

for(int i=0;i<n;i++){


presum+=arr[i];

if(mp.find(presum)!=mp.end()){


    return true;
    
}


mp.insert(presum);



}