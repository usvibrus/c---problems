class Solution {

public:
    
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         
         if(accumulate(gas.begin(),gas.end(),0) < accumulate(cost.begin(),cost.end(),0))return -1;

//  accumulate(gas.begin(),gas.end(),0) this function returns sum of all elements inside vector

        int c = gas.size();

int totalreaminingfuel =0;
int actualindex=0;

        for(int i=0;i<c;i++){
       
         totalreaminingfuel+=gas[i]-cost[i];

         if(totalreaminingfuel<0){
actualindex=i+1;
             totalreaminingfuel=0;

         }

        }

        return actualindex;

    }
};