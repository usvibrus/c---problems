
N = 5, X = 10
Arr[] = {1, 2, 4, 3, 6}

using map we are finding 

10-1 = 9 if 9 is present in arr or not
10-2 = 8 if 8 is present in arr or not

10-4 = 6 if 6 is present in arr or not // yes present found the pair




=======================================================================
// THIS SOLUTION RETURNS IF PAIR PRENSENT OR NOT

unordered_map<int ,int>mp;

for(int i=0;i<n;i++){
mp[arr[i]]++;

}
for(auto it= mp.begin();it!=mp.end();it++){


     int key = it->first;
     int val = it->second;

    int pair = x-key;

    if(key = pair){// this condition is incase it counts the same element as pair
   
   if(val>1){
    return true;
   }
   }else{
   if(mp.find(pair)!=mp.end()){
          return true;

   }

    }
     }
}


\\==========================================================================================\\
//THIS SOLUTION RETURN INDEX OF THE PAIRS OF TWO SUM



vector<int>ans;

unordered_map<int,int>mp;

for(int i=0;i<n;i++){



    if(mp.find(target-nums[i])!=mp.end()){

      ans.push_back(mp[target-nums[i]]);
    ans.push_back(i);
    }


    mp[nums[i]]=i;   //here we are push key as a nums[i] and value as index of nums[i]
}
===========================================================================================================================