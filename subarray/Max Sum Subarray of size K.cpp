//Max Sum Subarray of size K


class sol{

 int i=0,j=0;
        long ans=0,sum=0;
        while(j<N)
        {
            sum=sum+Arr[j];
            if(j-i+1<K)
            {
                j++;
            }
            else if(j-i+1==K)
            {
                ans=max(ans,sum);
                sum=sum-Arr[i];
                i++;
                j++;
            }
            
        }
        return ans;
        
    };