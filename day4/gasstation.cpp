class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int cumsum=0,min=0,ix=0;
        for(int i=0;i<gas.size();++i){
            cumsum+=gas[i]-cost[i];
            if(i==0 or cumsum<min) {
                min = cumsum;
                ix=(i+1)%gas.size();
            }
        }
        return cumsum>=0?ix:-1;
    }
};
